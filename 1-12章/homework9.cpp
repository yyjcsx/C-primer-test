#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<deque>
using namespace std;



//test 9.2
//list <deque<int>> l1;

//test9.3
//bool check(vector<int> v1, int b) {
//	for (vector<int>::const_iterator c = v1.begin(); c != v1.end(); c++) {
//		if (*c == b) {
//			cout << "find the result" << endl;
//			return true;
//			
//			
//		}
//	}
//	return false;
//}
//
//
//int main() {
//	vector<int> v1{ 1,3,5,7,9 };
//	int b = 3;
//	cout << check(v1, b) << endl;
//
//}



//test 9.5
//vector<int>::const_iterator check(vector<int> &v1, int b) {
//		for (vector<int>::const_iterator c = v1.begin(); c != v1.end(); c++) {
//			if (*c == b) {
//				cout << "find the result" << endl;
//				return c;
//			}
//		}
//		return v1.end();
//	}
//	
//	
//	int main() {
//		vector<int> v1{ 1,3,5,7,9 };
//		int b = 3;
//		vector<int>::const_iterator i =  check(v1, b);
//		cout<<*i<<endl;
//	
//	}


//test9.11
//vector<int> v1{ 1,2,3 };//1,2,3三个int值
//vector<int> v2(v1);//1,2,3三个int值
//vector<int> v3;//空容器
//vector<int> v4(v1.begin(), v1.end());//1,2,3三个int值
//vector<int> v5(5);//5个0（默认初始化）
//vector<int> v6(6, 3);//6个3；

//test 9.13
//int main() {
//	list<int> l1 = { 1,2,3,4 };
//	vector<double> v1(l1.begin(), l1.end());
//	vector<int> v2 = { 1,2,3,4,5 };
//	vector<double> v3(v2.begin(), v2.end());
//}



//test 9.14
//int main() {
//
//	list<const char*> slist = { "hello", "world", "!" };//注意这里要用const char*，采用char*会出错
//	vector<string> v1;
//	v1.assign(slist.begin(), slist.end());
//	for (auto c = v1.begin(); c != v1.end(); c++) {
//		cout << *c << endl;
//	}
//
//};

//test 9.15
//int main() {
//	vector<int> v1{ 1,3,5,7,9 };
//	vector<int> v2{ 1,3,5,7,9,11 };
//	bool c = (v1 > v2);
//	cout << c << endl;
//}


//test 9.16 只需要比较是否相等即可，还不太用管具体的大小关系
//bool compare(vector<int> v1, list<int> l1) {
//	
//	auto vc1 = v1.begin();
//	auto vc2 = v1.end();
//	auto lc1 = l1.begin();
//	auto lc2 = l1.end();
//	auto size = (v1.size() > l1.size()) ? l1.size() : v1.size();
//	if (v1.size() != l1.size()) {
//		return false;
//	}
//	for (; vc1!=vc2; vc1++, lc1++) {
//		if (*vc1 != *lc1) {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	list<int> v1{ 1,3,5,7,9 };
//	vector<int> v2{ 1,3,5,8,9 };
//	cout << compare(v2, v1) << endl;
//	
//	
//}


//test 9.18
//int main() {
//	deque<string> d1;
//	string s1;
//	while (cin >> s1)
//	{
//		d1.push_back(s1);
//		for (auto c = d1.begin(); c != d1.end(); c++) {
//			cout <<"  " << *c;
//		}
//	}
//
//}

//test 9.19
//int main() {
//	list<string> l1;
//	string s1;
//	while (cin >> s1)
//	{
//		l1.push_back(s1);
//		for (auto c = l1.begin(); c != l1.end(); c++) {
//			cout <<"  " << *c;
//		}
//	}
//
//}

//test 9.20
//int main() {
//	list<int> l1{ 1,2,3,4,5,6,7,8,9,10 };
//	deque<int> d1, d2;
//	for (auto c = l1.begin(); c != l1.end(); c++) {
//		if (*c % 2 == 0) {
//			d1.push_back(*c);
//		}
//		else {
//			d2.push_back(*c);
//		}
//	}
//	for (auto d = d1.begin(); d != d1.end(); d++) {
//		cout << *d ;
//	}
//	cout << endl;
//	for (auto e = d2.begin(); e != d2.end(); e++) {
//		cout << *e ;
//	}
//}