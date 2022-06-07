#pragma once
#ifndef CHECK_STRING_SIZE_H
#define CHECK_STRING_SIZE_H
#include<string>
using std::string;
class check_string_size {
private:
	
	size_t threshold;
public:
	check_string_size(size_t t1) :threshold(t1) {};
	int operator()(string&s1);
};




#endif // !CHECK_STRING_SIZE_H
