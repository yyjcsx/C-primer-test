#pragma once
#ifndef TEXTQUERY
#define TEXTQUERY

#include"Queryresult.h"
#include<iostream>
using std::istream;
using std::ostream;
#include<map>
using std::map;
#include<utility>
using std::pair;

class textQuery {
	friend class Queryresult;
public:
	using line_no = vector<string>::size_type;
	textQuery(istream& infile);
	Queryresult query (const string &s2) const;
	ostream& print(ostream& os, const Queryresult& qr);
private:
	shared_ptr<vector<string>> content;
	map<string, shared_ptr<set<line_no>>> m1;
	pair<string, set<int>> p1;
	string s1, word;

};

#endif // !TEXTQUERY



