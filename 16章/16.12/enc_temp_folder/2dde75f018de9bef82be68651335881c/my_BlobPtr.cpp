#include<vector>
#include<memory>
#include<string>
#include<iostream>
template<typename T> class BlobPtr;
template<typename T> class Blob {
public:
	friend  class BlobPtr<T>;
	typedef T value_Type;
	typedef typename std::vector<T>::size_type size_type;//而使用 typename 的作用就是告诉 c++ 编译器，typename 后面的字符串为一个类型名称，而不是成员函数或者成员变量
	Blob();
	Blob(std::initializer_list<T> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const T& t) { data->push_back(t); }
	void pop_back();

	T& back();
	T& operator[](size_type i);
private:
	std::shared_ptr<std::vector<T>> data;
	void check(size_type i, const std::string& msg) const;
};








template<typename T> void Blob<T>::check(size_type i, const std::string& msg) const {
	if (i >= data->size())
		throw std::out_of_range(msg);
}

template<typename T> T& Blob<T>::back() {
	check(0, "Blob is empty");
	return data->back();
}

template<typename T> T& Blob<T>::operator[](size_type i) {
	check(i, "the Bolb is smaller than i");
	return (*data)[i];
}
template<typename T> void Blob<T>::pop_back() {
	check(0, "Blob is empty");
	data->pop_back();
}

template<typename T>Blob<T>::Blob() :data(std::make_shared<std::vector<T>>()) {}

template<typename T>Blob<T>::Blob(std::initializer_list<T> il) : data(std::make_shared<std::vector<T>>(il)) {}















template<typename T> class BlobPtr {
public:
	
	BlobPtr():curr(0){}
	BlobPtr(Blob<T> &a,size_t sz = 0):wptr(a.data),curr(sz){}
	T& operator*() const {
		auto p = check(curr, "curr is bigger than end"); return (*p)[curr];
	}
	BlobPtr& operator++(int);//这里写int是为了和前置区分
	BlobPtr& operator--(int);
	BlobPtr& operator++();//这里不写int是为了和后置区分
	BlobPtr& operator--();
private:
	std::shared_ptr<std::vector<T>> check(std::size_t, const std::string&)const;//检查元素是否超过容器大小
	std::weak_ptr<std::vector<T>> wptr;//
	std::size_t curr;//数组当前位置
};

template<typename T> BlobPtr<T>& BlobPtr<T>::operator++(int) {
	BlobPtr ret = *this;
	++* this;
	return ret;
}
template<typename T> BlobPtr<T>& BlobPtr<T>::operator--(int) {
	BlobPtr ret = *this;
	--* this;
	return ret;
}


template<typename T> std::shared_ptr<std::vector<T>> BlobPtr<T>:: check(std::size_t i, const std::string& msg) const {
	std::shared_ptr<std::vector<T>> ret = wptr.lock();//wptr.lock的作用：如果当前 weak_ptr 已经过期，则该函数会返回一个空的 shared_ptr 指针；反之，该函数返回一个和当前 weak_ptr 指向相同的 shared_ptr 指针。
	if (ret == nullptr)
		throw std::runtime_error(msg);
	else
		if (i >= ret->size())
			throw std::runtime_error("i is out of range");
		else
			return ret;
}


template<typename T> BlobPtr<T>& BlobPtr<T>::operator++() {
	check(curr, "increment past end of StrBlobPtr");
	++curr;                 // 推进当前位置
	return *this;
}

template<typename T> BlobPtr<T>& BlobPtr<T>::operator--() {
	--curr;                 // 递减当前位置
	check(curr, "decrement past begin of StrBlobPtr");
	return *this;
}



int main() {
	Blob<std::string> articles = { "hello","world","!" };
	for (auto i = 0; i != articles.size(); i++) {
		std::cout << articles[i] << std::endl;
	}
	BlobPtr<std::string> s2(articles, 0);
	for (auto j = 0; j != articles.size(); j++) {
		std::cout << (*s2++) << std::endl;
	}
}