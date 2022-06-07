#include"if_then_else.h"
string& if_then_else::operator()(int first_para, string& success_text  , string& filed_text) {
	if (check_para < first_para)
	{
		os << success_text << std::endl;
		return success_text;
	}

	else {
		os << filed_text << std::endl;
		return filed_text;
	}



}