#pragma once
#ifndef  QUERY_RESULT
#define QUERY_RESULT
#include<string>
using std::string;
#include<memory>
using std::shared_ptr;
#include<set>
using std::set;
#include<vector>
using std::vector;

class textQuery;
class Queryresult
{
		friend class textQuery;
	public:
		typedef vector<string>::size_type line_no;
		typedef set<line_no>::const_iterator line_it;
		Queryresult(string s, shared_ptr<set<line_no>> p1, shared_ptr<vector<string>> file) :word(s), line_number(p1), text(file) {}
		line_it begin() const { return line_number->begin(); }
		line_it end() const { return line_number->end(); }
		shared_ptr<vector<string>> get_file() { return text; }
	private:
		string word;
		shared_ptr<set<line_no>> line_number;
		shared_ptr<vector<string>> text;
	
	};


#endif // ! QUERY_RESULT



