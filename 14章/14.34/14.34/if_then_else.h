#pragma once
#ifndef IF_THEN_ELSE_H
#define IF_THEN_ELSE_H

#include<string>
#include<iostream>
using std::string;
using std::ostream;
using std::cout;
class if_then_else {
public:
	if_then_else(ostream& o = cout) :os(o) {};
	string& operator()( int first_para, string& success_text, string& filed_text);
private:
	int check_para = 5;
	ostream& os;
};


#endif