

#include<fstream>
#include<sstream>
#include<map>
#include<iostream>
#include<set>
#include"StrVec.h"
using namespace std;



class textQury;
class Queryresult {
	friend class textQury;
public:
	Queryresult(string s, shared_ptr<set<int>> p1, shared_ptr<StrVec>& file) :word(s), line_number(p1), text(file) {}

private:
	string word;
	shared_ptr<set<int>> line_number;
	shared_ptr<StrVec> text;

};
class Queryresult;
class textQury {
	friend class Queryresult;
public:
	
	textQury(istream& infile): content(new StrVec){
		while (getline(infile, s1))
		{
			
			content->push_back(s1);
			int n = content->size()-1;
			istringstream steam(s1);
			while (steam >> word)
			{
				auto& linenumber = m1[word];//����map���Ƿ���word�����û�о����һ����������ָ�뱣֤��ÿ��while������set������ֱ�Ӵ�map����ȡ������ͬʱ����ָ�뻹����Ҫ����delete����
				if (!linenumber) {
					linenumber.reset(new set<int>);//shared_ptr��reset��Ա��������һ������q���ǰѸ�shared_ptr��Ϊָ��q���˴�new�󷵻�һ��ָ�룬������ÿ��������������
				}
				linenumber->insert(n);
				
			}
	}
	};
	Queryresult query(string s2);
	ostream& print(ostream& os, const Queryresult& qr);
private:
	shared_ptr<StrVec> content;
	map<string,  shared_ptr<set<int>>> m1;
	pair<string, set<int>> p1;
	string s1, word;
	
};
Queryresult textQury:: query(string s2) {
	static shared_ptr<set<int>> nodata(new set<int>);
	auto flag = m1.find(s2);
	if (flag == m1.end())
		return Queryresult(s2, nodata, content);
	else
		return Queryresult(s2, flag->second, content);
}
ostream& textQury::print(ostream& os, const Queryresult& qr)
{
	os << qr.word;
	int n = 0;
	for (auto c : *qr.line_number) {
		os << "line number: " << c + 1 << endl;
		os << "the content is :"  << endl;
		os << *(qr.text->begin() + c) << endl;
	}
	return os;
}
void runQuery(istream& infile) {
	textQury tq(infile);
	while (true) {
		string s1;
		if (!(cin >> s1) || s1 == "q") break;
		tq.print(cout, tq.query(s1));
	}
}
int main() {
	ifstream in("12.20.txt");
		runQuery(in);
}