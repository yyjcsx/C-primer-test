#include "textQuery.h"
#include<sstream>

textQuery::textQuery(istream& infile) : content(new vector<string>) {
	while (getline(infile, s1))
	{

		content->push_back(s1);
		int n = content->size() - 1;
		std::istringstream steam(s1);
		while (steam >> word)
		{
			auto& linenumber = m1[word];//查找map中是否有word，如果没有就添加一个，并利用指针保证了每次while不更新set，而是直接从map当中取出来，同时智能指针还不需要担心delete问题
			if (!linenumber) {
				linenumber.reset(new set<line_no>);//shared_ptr的reset成员函数，跟一个参数q就是把该shared_ptr改为指向q，此处new后返回一个指针，因此正好可以利用这个方法
			}
			linenumber->insert(n);

		}
	}
};


Queryresult textQuery::query(const string &s2) const{
	static shared_ptr<set<line_no>> nodata(new set<line_no>);
	auto flag = m1.find(s2);
	if (flag == m1.end())
		return Queryresult(s2, nodata, content);
	else
		return Queryresult(s2, flag->second, content);
}
ostream& textQuery::print(ostream& os, const Queryresult& qr)
{
	os << qr.word;
	int n = 0;
	for (auto c : *qr.line_number) {
		os << "line number: " << c + 1 << std::endl;
		os << "the content is :" << std::endl;
		os << *(qr.text->begin() + c) << std::endl;
	}
	return os;
}
