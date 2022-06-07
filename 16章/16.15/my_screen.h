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
	//operator����һ��Ҫ�Ӳ����б���������޷�ʵ�������϶�����ȷ
	friend ostream& operator<< <H, W> (ostream&, Screen<H, W>&);//һ��һ�Ѻù�ϵ����Ԫ����ʹ��Screen��ģ���β���Ϊoperator��ģ��ʵ��
	friend istream& operator>> <H, W> (istream&, Screen<H, W>&);//�Ѻù�ϵ���޶�������ͬ����ʵ������Screen��operator֮��
public:
	
	Screen() :contents(H * W, '   ') {};
	Screen(char c ) : contents(H* W, c) {};//string(n,'a')�е�'a'һ��Ҫ��char���ͣ��õ����ţ�˫����string�ǲ��е�
	
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
