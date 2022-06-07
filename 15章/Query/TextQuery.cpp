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
			auto& linenumber = m1[word];//����map���Ƿ���word�����û�о����һ����������ָ�뱣֤��ÿ��while������set������ֱ�Ӵ�map����ȡ������ͬʱ����ָ�뻹����Ҫ����delete����
			if (!linenumber) {
				linenumber.reset(new set<line_no>);//shared_ptr��reset��Ա��������һ������q���ǰѸ�shared_ptr��Ϊָ��q���˴�new�󷵻�һ��ָ�룬������ÿ��������������
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
