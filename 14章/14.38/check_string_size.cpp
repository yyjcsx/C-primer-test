#include"check_string_size.h"
#include<iostream>
using std::cout;
using std::endl;
int check_string_size::operator()(string& s1) {
	if (s1.length() <= threshold)
		return 1;
	else
		return 2;
}