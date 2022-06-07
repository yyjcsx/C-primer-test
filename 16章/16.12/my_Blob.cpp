#include<vector>
#include<memory>
#include<string>
#include<iostream>
#include <stdexcept>
#include<iterator>
template<typename T> class Blob {
public:
	typedef T value_Type;
	typedef typename std::vector<T>::size_type size_type;//而使用 typename 的作用就是告诉 c++ 编译器，typename 后面的字符串为一个类型名称，而不是成员函数或者成员变量
	Blob();
	Blob(std::initializer_list<T> il);
	template<typename It> Blob<T>::Blob(It, It);
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

template<typename T> template<typename It> Blob<T>::Blob(It a, It b):data(std::make_shared<std::vector<T>(a,b)){}//如果lei'mo'ban


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

//int main() {
//	Blob<std::string> articles = { "hello","world","!" };
//	for (auto i = 0; i != articles.size(); i++) {
//		std::cout << articles[i] << std::endl;
//	}
//}