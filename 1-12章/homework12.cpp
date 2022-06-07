#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
#include<numeric>
#include<functional>
#include<fstream>
#include<map>
#include<sstream>
#include <unordered_map>
#include<new>
#include<memory>
using namespace std;

//test 12.2
//class StrBlob {
//public:
//	typedef vector<string> ::size_type size_type;
//	size_type size() { return data->size(); };
//	bool empty() { return data->empty(); };
//	string front() const;
//	const string& cfront() const;
//	const string& cback() const;
//	string back() const;
//	void pop_back();
//	void push_back(const string& r) { return data->push_back(r); }
//private:
//	shared_ptr<vector<string>> data;
//	void check(size_type, const string& message) const;
//};
//test 
//int main() {
//	int i, * pi1 = &i, * pi2 = nullptr, j;//为啥一个int用多次的情况有的时候可以，有的时候报错？
//	double* pd = new double(33), * pd2 = pd;
//	delete pi1;//操作要放到main函数中进行
//}

//test 12.6
//vector<int>* produce_new() {
//	
//	vector<int> *p(new vector<int>);
//	return p;
//}
//
//
//vector<int>* put_in(vector<int> *p ) {
//	int i;
//	while (cin >> i)
//		p->push_back(i);
//	return p;
//}
//void vector_output(vector<int>* p)
//{
//	for (auto a : *p) {
//		cout << a << endl;
//	}
//}
//
//int main() {
//	vector<int>*p = produce_new();
//	p = put_in(p);
//	vector_output(p);
//	delete p;
//   p = nullptr;
//	return 0;
//}


//test 12.7
//shared_ptr<vector<int>> produce_new() {
//	
//	shared_ptr<vector<int>> p = make_shared<vector<int>>() ;
//	return p;
//}
//
//
//shared_ptr<vector<int>> put_in(shared_ptr<vector<int>> p ) {
//	int i;
//	while (cin >> i)
//		p->push_back(i);
//	return p;
//}
//void vector_output(shared_ptr<vector<int>> p)
//{
//	for (auto a : *p) {
//		cout << a << endl;
//	}
//}
//
//int main() {
//	shared_ptr<vector<int>> p = produce_new();
//	p = put_in(p);
//	vector_output(p);
//	
//	return 0;
//}

//test 12.19
//class StrBlob {
//public:
//	typedef vector<string> ::size_type size_type;
//	size_type size() { return data->size(); };
//	bool empty() { return data->empty(); };
//	string front() const;
//	const string& cfront() const;
//	const string& cback() const;
//	string back() const;
//	void pop_back();
//	void push_back(const string& r) { return data->push_back(r); }
//private:
//	shared_ptr<vector<string>> data;
//	void check(size_type, const string& message) const;
//};
//
