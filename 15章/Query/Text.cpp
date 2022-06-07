//#include<string>
//#include<memory>
//#include<set>
//#include<vector>
//#include<iostream>
//#include<sstream>
//#include<map>
//using namespace std;
//
//
//class textQury;
//class Queryresult {
//	friend class textQury;
//public:
//	Queryresult(string s, shared_ptr<set<int>> p1, shared_ptr<vector<string>>& file) :word(s), line_number(p1), text(file) {}
//
//private:
//	string word;
//	shared_ptr<set<int>> line_number;
//	shared_ptr<vector<string>> text;
//
//};
//class Queryresult;
//class textQury {
//	friend class Queryresult;
//public:
//	
//	textQury(istream& infile): content(new vector<string>){
//		while (getline(infile, s1))
//		{
//			
//			content->push_back(s1);
//			int n = content->size()-1;
//			istringstream steam(s1);
//			while (steam >> word)
//			{
//				auto& linenumber = m1[word];//查找map中是否有word，如果没有就添加一个，并利用指针保证了每次while不更新set，而是直接从map当中取出来，同时智能指针还不需要担心delete问题
//				if (!linenumber) {
//					linenumber.reset(new set<int>);//shared_ptr的reset成员函数，跟一个参数q就是把该shared_ptr改为指向q，此处new后返回一个指针，因此正好可以利用这个方法
//				}
//				linenumber->insert(n);
//				
//			}
//	}
//	};
//	Queryresult query(string s2);
//	ostream& print(ostream& os, const Queryresult& qr);
//private:
//	shared_ptr<vector<string>> content;
//	map<string,  shared_ptr<set<int>>> m1;
//	pair<string, set<int>> p1;
//	string s1, word;
//	
//};
//Queryresult textQury:: query(string s2) {
//	static shared_ptr<set<int>> nodata(new set<int>);
//	auto flag = m1.find(s2);
//	if (flag == m1.end())
//		return Queryresult(s2, nodata, content);
//	else
//		return Queryresult(s2, flag->second, content);
//}
//ostream& textQury::print(ostream& os, const Queryresult& qr)
//{
//	os << qr.word;
//	int n = 0;
//	for (auto c : *qr.line_number) {
//		os << "line number: " << c + 1 << endl;
//		os << "the content is :"  << endl;
//		os << *(qr.text->begin() + c) << endl;
//	}
//	return os;
//}