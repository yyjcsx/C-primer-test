#pragma once
#ifndef PRINTSTRING_H
#define PRINTSTRING_H
#include<iostream>
#include<string>
#include<vector>
using std::istream;
using std::string;
using std::cin;
using std::vector;
class PrintString {
public:
	PrintString(istream& i = cin):is(i){}
	void operator()(vector<string>&) ;//�μǲ�Ҫ���ؾֲ�����������
private:
	istream& is;
	string s1;


};



#endif // PRINTSTRING_H
