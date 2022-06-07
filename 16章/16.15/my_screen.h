#pragma once
#ifndef TEST_SCREEN_H
#define TEST_SCREEN_H

#include <algorithm>
#include <iostream>
using std::ostream;
using std::istream;
using std::cout;
using std::cin;
#include <string>
using std::string;
#include<vector>


template<unsigned H, unsigned W> class Screen;
template<unsigned H, unsigned W> ostream& operator<<(ostream&, Screen<H, W>&);
template<unsigned H, unsigned W> istream& operator>>(istream&, Screen<H, W>&);



template<unsigned H, unsigned W>
class Screen {
	//operator后面一定要加参数列表，否则根本无法实例化，肯定不正确
	friend ostream& operator<< <H, W> (ostream&, Screen<H, W>&);//一对一友好关系，友元声明使用Screen的模板形参作为operator的模板实参
	friend istream& operator>> <H, W> (istream&, Screen<H, W>&);//友好关系被限定在用相同类型实例化的Screen和operator之间
public:
	
	Screen() :contents(H * W, '   ') {};
	Screen(char c ) : contents(H* W, c) {};//string(n,'a')中的'a'一定要是char类型，用单引号，双引号string是不行的
	
	Screen& move(unsigned h, unsigned w) {
		unsigned row = W * h;
		cursor = row + w;
		return *this;
	}
	Screen& set(char c) {
		contents[cursor] = c;
		return *this;
	}
	Screen& display(ostream& os) {
		do_display(os);
		return *this;
	}

	const Screen& display(ostream& os) const {
		do_display(os);
		return *this;
	}
private:

	unsigned cursor = 0;
	void do_display(ostream& os) const {
		os << contents;
	}
	string contents;
};



template<unsigned H, unsigned W> ostream& operator<<(ostream& os , Screen<H, W>& s1)
{
	os << s1.contents;
	return os;
}
template<unsigned H, unsigned W> istream& operator>>(istream& is, Screen<H, W>& s1) {
	string t;
	is >> t;
	s1.contents = t.substr(0, H * W);
	return is;
}






#endif //TEST_SCREEN_H
