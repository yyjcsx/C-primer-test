#include<vector>
#include<memory>
#include<string>
#include<iostream>
template<typename T> class BlobPtr;
template<typename T> class Blob {
public:
	friend  class BlobPtr<T>;
	typedef T value_Type;
	typedef typename std::vector<T>::size_type size_type;//��ʹ�� typename �����þ��Ǹ��� c++ ��������typename ������ַ���Ϊһ���������ƣ������ǳ�Ա�������߳�Ա����
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
	BlobPtr& operator++(int);//����дint��Ϊ�˺�ǰ������
	BlobPtr& operator--(int);
	BlobPtr& operator++();//���ﲻдint��Ϊ�˺ͺ�������
	BlobPtr& operator--();
private:
	std::shared_ptr<std::vector<T>> check(std::size_t, const std::string&)const;//���Ԫ���Ƿ񳬹�������С
	std::weak_ptr<std::vector<T>> wptr;//
	std::size_t curr;//���鵱ǰλ��
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
	std::shared_ptr<std::vector<T>> ret = wptr.lock();//wptr.lock�����ã������ǰ weak_ptr �Ѿ����ڣ���ú����᷵��һ���յ� shared_ptr ָ�룻��֮���ú�������һ���͵�ǰ weak_ptr ָ����ͬ�� shared_ptr ָ�롣
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
	++curr;                 // �ƽ���ǰλ��
	return *this;
}

template<typename T> BlobPtr<T>& BlobPtr<T>::operator--() {
	--curr;                 // �ݼ���ǰλ��
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