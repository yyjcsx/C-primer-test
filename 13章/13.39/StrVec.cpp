#include"StrVec.h"
#include<algorithm>

using namespace std;
void StrVec::push_back(const string& s) {
	chk_n_alloc();
	alloc.construct(first_free++, s);
}


//重新分配新空间
void StrVec::reallocate() {
	auto newcapacity = size() ? 2 * size(): 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i) {
		alloc.construct(dest++, std::move(*elem++));
	}
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}

void StrVec::reallocate(size_t n) {
	auto newcapacity = size() ?  n : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i) {
		alloc.construct(dest++, std::move(*elem++));
	}
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}




//工具函数，负责将给定范围的元素拷贝到新分配的内存中
pair<string*, string*> StrVec::alloc_n_copy(const string* b, const string* e) {
	auto data = alloc.allocate(e - b);
	return{ data,uninitialized_copy(b,e,data) };
}

//原版本
//void StrVec::free() {
//	if (elements) {
//		for (auto p = first_free; p != elements;)
//			alloc.destroy(--p);
//		alloc.deallocate(elements, cap - elements);
//	}
//}
StrVec::StrVec(const StrVec& s) {
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = newdata.second;
}

StrVec::~StrVec() { free(); }
StrVec& StrVec::operator=(const StrVec& rhs) {
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

//test 13.43版本
void StrVec::free() {
	if (elements) {
		//for (auto p = first_free; p != elements;)
		//	alloc.destroy(--p);
		//alloc.deallocate(elements, cap - elements);
		for_each(elements, first_free, [this](string& p) {alloc.destroy(&p); });
		alloc.deallocate(elements, cap - elements);
	}
}



void StrVec::reserve(size_t s) {
	if (s > capacity()) {
		reallocate(s);
	}

}
void StrVec::resize(size_t s, const string & str ="") {
	if (s > capacity()) {
		reallocate(s);
		for (auto p = first_free; p != cap - 1; ++p) {
			alloc.construct(first_free++, str);
		}
	}
	if (s < capacity()) {
		auto newcapacity = size() ? s : 1;
		auto newdata = alloc.allocate(newcapacity);
		auto dest = newdata;
		auto elem = elements;
		for (size_t i = 0; i != s; ++i) {
			alloc.construct(dest++, std::move(*elem++));
		}
		free();
		elements = newdata;
		first_free = dest;
		cap = elements + newcapacity;
	}
}

StrVec::StrVec(initializer_list<string> il) {
	// 调用 alloc_n_copy 分配与列表 il 中元素数目一样多的空间
	auto newdata = alloc_n_copy(il.begin(), il.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}
allocator<string> StrVec::alloc;

bool operator ==(const StrVec& s1, const StrVec& s2) {
	if (s1.size() != s2.size())
		return false;
	for (auto iter1 = s1.begin(), iter2 = s2.begin(); iter1 != s1.end() && iter2 != s2.end(); iter1++, iter2++) {
		if (iter1 != iter2)
			return false;
	}
	return true;
}
bool operator!=(const StrVec& s1, const StrVec& s2) {
	return !(s1 == s2);
}

StrVec& StrVec::operator=(initializer_list<string> li) {
	auto data = alloc_n_copy(li.begin(), li.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}