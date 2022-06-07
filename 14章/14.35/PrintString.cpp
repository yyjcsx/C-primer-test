#include"PrintString.h"
#include<istream>


void PrintString::operator()(vector<string>& v1)  {
	string s2;
	if (getline(cin, s2))
	{
		v1.push_back(s2);
		std::cout << "read successfully" << std::endl;
	}
	else
	{
		s2 = "Î´¶Áµ½Êý¾Ý";
		v1.push_back(s2);
		std::cout << "read failed" << std::endl;
	}
	
	
}