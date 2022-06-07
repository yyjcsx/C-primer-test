#pragma once
#pragma once
#ifndef String_H
#define String_H

#include<iterator>
using std::make_move_iterator;
#include <memory>
using std::allocator;
#include <utility>
using std::pair;
#include <initializer_list>
using std::initializer_list;
using std::uninitialized_copy;
using std::uninitialized_fill_n;
#include<iostream>
using std::ostream;
using std::cout;
using std::endl;


class String {
	friend String operator+(const String&, const String&);
	friend String add(const String&, const String&);
	friend ostream& operator<<(ostream&, const String&);//C++规定输入输出流只能采用引用形式，不可以拷贝
	friend ostream& print(ostream&, const String&);
	friend bool operator<(const String& s1, const String& s2);
public:
	String() :sz(0), p(0) {}
	String(const String& s) :sz(s.sz), p(a.allocate(sz)) {
		uninitialized_copy(s.p, s.p + sz, p);
		cout << "执行了拷贝构造函数" <<*(s.p)<< endl;
	}
	String(const char* cp) :sz(strlen(cp)), p(a.allocate(sz)) {
		uninitialized_copy(cp, cp + sz, p);
	
	}
	String(size_t n,char c):sz(n),p(a.allocate(sz)){
		uninitialized_fill_n(p, n, c);
	}
	String(String&& s) noexcept :sz(s.sz), p(a.allocate(sz)) {
		uninitialized_copy(make_move_iterator(s.p), make_move_iterator(s.p + sz), p);
		s.p = nullptr;
		cout << "执行移动构造函数" << endl;
	}





public:
	const char* begin() { return p; }
	const char* end() { return p + sz; }
	const char* begin() const { return p; }//注意！！这里的const是用来修饰调用begin()/end()的String的，只有加上const，const String调用begin/end才不会报错
	const char* end() const { return p + sz; }
	size_t size() const { return sz; }
	void swap(String&);
	String& operator=(const char*);
	String& operator=(const String&);
	String& operator=(const char);
	String& operator=(String&&);
	char& operator[](size_t n);
	const char& operator[](size_t n) const;
	String& operator++();
	String& operator--();
	String operator++(int);
	String operator--(int);
private:
	size_t sz;//String大小
	char* p;//起始指针
	static allocator<char> a;//分配内存范围
	void free();
};


#endif // !String_H
