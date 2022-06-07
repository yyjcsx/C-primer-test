#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
#include<numeric>
#include<functional>
#include<fstream>
using namespace std;
using namespace std::placeholders;

//test 10.1
//int main() {
//	int a;
//	vector<int> v1;
//	while (cin >> a) {
//		v1.push_back(a);
//	}
//	
//	cout << count(v1.begin(), v1.end(), 1) << endl;
//}

//test 10.2
//int main() {
//	
//	list<string> v1{};
//	string s1;
//	while (cin >> s1) {
//		v1.push_back(s1);
//	}
//
//	cout << count(v1.begin(), v1.end(), "123") << endl;
//}

//test 10.3
//int main() {
//	vector<int> v1{ 1,2,3,4,5,6 };
//	int sum;
//	sum = accumulate(v1.begin(), v1.end(), 0);
//	cout << sum << endl;
//}

//test 10.5
//int main() {
//	vector<const char*> v1{ "abc","a","b","a","a","a" };
//	list<const char*> l1{ "abc","a","b","a" ,"a","a" ,"a","a" };//牢记第二个序列至少要比第一个序列要长
//	bool compare = equal(v1.cbegin(), v1.cend(), l1.cbegin());
//	cout << compare;
//}
//equal函数中比较的是const char*指针的地址，如果地址相同就判定相同，如果地址不同就算是一样的字符串也会判定不同
//上面这个就返回true
//int main() {
//	const char a[] = "hello world!";
//	const char b[] = "hello world!";//这两个是不同数组，故存储地址不同
//	vector<const char*> v1{ a };
//	list<const char*> l1{ b };//牢记第二个序列至少要比第一个序列要长
//	bool compare = equal(v1.cbegin(), v1.cend(), l1.cbegin());
//	cout << compare;
//}
//这种情况下返回false


//test 10.6
//int main() {
//	vector<int> v1{ 1, 2, 3, 4, 5, 6 };
//	fill_n(v1.begin(), v1.size(), 0);
//	for (auto c = v1.begin(); c != v1.end(); c++)
//		cout << *c << endl;
//}

//test 10.9
//void elimDups() {
//	vector<string> v1;
//	string s1;
//	while (cin >> s1)
//		v1.push_back(s1);
//	sort(v1.begin(), v1.end());
//	auto unique_iter = unique(v1.begin(), v1.end());
//	v1.erase(unique_iter, v1.end());
//	for (auto c = v1.begin(); c != v1.end(); c++) {
//		cout << *c << endl;
//	}
//}
//int main() {
//	elimDups();
//}

//test 10.11
//vector<string> elimDups(vector<string>& v1) {
//	
//	string s1;
//	while (cin >> s1)
//		v1.push_back(s1);
//	sort(v1.begin(), v1.end());
//	auto unique_iter = unique(v1.begin(), v1.end());
//	v1.erase(unique_iter, v1.end());
//	for (auto c = v1.begin(); c != v1.end(); c++) {
//		cout << *c << endl;
//	}
//	return v1;
//}
//bool isShorter(const string& s1, const string& s2) {
//	return s1.size() < s2.size();
//}
//int main() {
//	vector<string> v1;
//	string s;
//	while (cin >> s) {
//		v1.push_back(s);
//	}
//	elimDups(v1);
//	stable_sort(v1.begin(), v1.end(), isShorter);
//	for (auto c = v1.begin(); c != v1.end(); c++) {
//		cout << *c << "   ";
//	}
//}

//test 10.13
//bool is_Shorter_than5(const std::string& s1) {
//	return s1.size() >= 5;
//}
//
//void compare_5(vector<string>& v1) {//很玄学，这里不能输入const，猜测是因为partition有可能对v1作一定改动，所以默认不能用const形式
//	//以后出现C2678报错就先考虑是不是传入的参数不允许为const，因为函数有可能对参数做改动
//	  vector<string>::iterator   iter = partition(v1.begin(), v1.end(), is_Shorter_than5);
//	
//	for (auto c = v1.begin(); c != iter; c++) {
//		std::cout << *c << std::endl;
//	}
//}
//
//
//int main() {
//	std::vector<std::string> v1;
//	std::string s;
//	while (std::cin >> s) {
//		v1.push_back(s);
//	}
//	compare_5(v1);
//	
//	
//}


//test 10.14
//auto sum_myself = [](int a, int b) {return a + b; };
//int main() {
//	int c = sum_myself(1, 2);
//	cout << c;
//}

//test 10.15
//void sum_1() {
//	int a = 5;
//	auto sum_2 = [a](int b) {return a + b; };
//	int sum = sum_2(4);
//	cout << sum << endl;
//}
//int main() {
//	sum_1();
//}

//test 10.16
//void elimDups(vector<string>& v1) {
//	
//
//	sort(v1.begin(), v1.end());
//	auto unique_iter = unique(v1.begin(), v1.end());
//	v1.erase(unique_iter, v1.end());
//
//}
//void biggest(vector<string>& v1, vector<string> ::size_type sz) {
//	elimDups(v1);
//	stable_sort(v1.begin(), v1.end(), [](const string& s1, const string & s2) {return s1.size() < s2.size(); });
//	vector<string>::iterator iter = find_if(v1.begin(), v1.end(), [sz](const string& a) {return a.size() > sz; });
//	for (auto c = iter; c != v1.end(); c++) {
//		cout << *c << endl;
//	}
//}
//int main() {
//	vector<string> v1;
//	string s1;
//	while (cin >> s1)
//		v1.push_back(s1);
//	biggest(v1, 5);
//	
//}
//


//test 10.18，19
//void elimDups(vector<string>& v1) {
//	
//
//	sort(v1.begin(), v1.end());
//	auto unique_iter = unique(v1.begin(), v1.end());
//	v1.erase(unique_iter, v1.end());
//
//}
//void biggest(vector<string>& v1, vector<string> ::size_type sz) {
//	elimDups(v1);
//	//stable_sort(v1.begin(), v1.end(), [](const string& s1, const string & s2) {return s1.size() < s2.size(); });
//	//partition会改变原有元素的相对位置，而stable_partition就不会改变元素的相对位置
//	vector<string>::iterator iter = partition(v1.begin(), v1.end(), [sz](const string& a) {return a.size() < sz; });
//	for (auto c = iter; c != v1.end(); c++) {
//		cout << *c << endl;
//	}
//}
//int main() {
//	vector<string> v1;
//	string s1;
//	while (cin >> s1)
//		v1.push_back(s1);
//	biggest(v1, 5);
//	
//}
//


//test 10.20

//void elimDups(vector<string>& v1) {
//	
//
//	sort(v1.begin(), v1.end());
//	auto unique_iter = unique(v1.begin(), v1.end());
//	v1.erase(unique_iter, v1.end());
//
//}
//void biggest(vector<string>& v1, vector<string> ::size_type sz) {
//	elimDups(v1);
//	stable_sort(v1.begin(), v1.end(), [](const string& s1, const string & s2) {return s1.size() < s2.size(); });
//	auto  number = count_if(v1.begin(), v1.end(), [sz](const string& a) {return a.size() > sz; });
//	cout << number;
//}
//int main() {
//	vector<string> v1;
//	string s1;
//	while (cin >> s1)
//		v1.push_back(s1);
//	biggest(v1, 6);
//	
//}

//test 10.21
//int main() {
//	int v1 = 5;
//	auto f = [v1]()mutable->bool{
//		if (v1>0) {
//			v1--;
//			return false;
//		}
//		else {
//			return true;
//		}
//	}
//}


//test 10.22
//void elimDups(vector<string>& v1) {
//	
//
//	sort(v1.begin(), v1.end());
//	auto unique_iter = unique(v1.begin(), v1.end());
//	v1.erase(unique_iter, v1.end());
//
//}
//bool check_size(const string& s1, vector<string>::size_type sz) {
//	return s1.size() > sz;
//}
//
//
//
//void biggest(vector<string>& v1, vector<string> ::size_type sz) {
//	elimDups(v1);
//	stable_sort(v1.begin(), v1.end(), [](const string& s1, const string & s2) {return s1.size() < s2.size(); });
//	auto  number = count_if(v1.begin(), v1.end(), bind(check_size,_1,sz));
//	cout << number;
//}
//int main() {
//	vector<string> v1;
//	string s1;
//	while (cin >> s1)
//		v1.push_back(s1);
//	biggest(v1, 6);
//	
//}

//test 10.24
//bool find_in_the_vctor(string::size_type sz, int a) {
//	return sz < a;
//}
//int main() {
//	string s;
//	cin >> s;
//	string::size_type sz = s.size();
//	vector<int> v1{ 1,2,3,4,5,6,7,8,9,10 };
//	auto c = find_if(v1.begin(), v1.end(), bind(find_in_the_vctor, sz, _1));
//	cout << *c << endl;
//}

//test10.25
//void elimDups(vector<string>& v1) {
//	
//
//	sort(v1.begin(), v1.end());
//	auto unique_iter = unique(v1.begin(), v1.end());
//	v1.erase(unique_iter, v1.end());
//
//}
//
//bool check_size(string::size_type sz, const string &a) {
//	return sz < a.size();
//}
//
//void biggest(vector<string>& v1, vector<string> ::size_type sz) {
//	elimDups(v1);
//	//stable_sort(v1.begin(), v1.end(), [](const string& s1, const string & s2) {return s1.size() < s2.size(); });
//	//partition会改变原有元素的相对位置，而stable_partition就不会改变元素的相对位置
//	vector<string>::iterator iter = partition(v1.begin(), v1.end(), bind(check_size,sz,_1));
//	for (auto c = iter; c != v1.end(); c++) {
//		cout << *c << endl;
//	}
//}
//int main() {
//	vector<string> v1;
//	string s1;
//	while (cin >> s1)
//		v1.push_back(s1);
//	biggest(v1, 5);
//	
//}


//test10.27
//int main() {
//	vector<int> v1{ 1,1,1,2,3,4,2,3,2,2,5,6,4,3,4,6,4,2,9,8,6 };
//	list<int> v2;
//	auto iter = back_inserter(v2);
//	stable_sort(v1.begin(), v1.end(), [](const int& s1, const int& s2) {return s1 < s2; });
//	unique_copy(v1.begin(), v1.end(), back_inserter(v2));
//	for (auto c = v2.begin(); c != v2.end(); c++) {
//		cout << *c << endl;
//	}
//}

//test 10.28
//int main() {
//	vector<int> v1{ 1,2,3,4,5,6,7,8,9 };
//	vector<int> v2;
//	vector<int> v3;
//	list<int> v4;
//	copy(v1.begin(), v1.end(), inserter(v3, v3.begin()));
//	copy(v1.begin(), v1.end(), back_inserter(v2));
//	copy(v1.begin(), v1.end(), front_inserter(v4));
//		for (auto c = v2.begin(); c != v2.end(); c++) {
//		cout << *c ;
//	}
//		cout << endl;
//		for (auto c = v3.begin(); c != v3.end(); c++) {
//		cout << *c ;
//	}cout << endl;
//		for (auto c = v4.begin(); c != v4.end(); c++) {
//		cout << *c ;
//	}cout << endl;
//}


//test 10.29
//int main() {
//	ifstream in ("input.txt");
//	istream_iterator<string> item_iter(in), eof;
//	ostream_iterator<string> item_out(cout,"   ");
//	vector<string> v1;
//	while (item_iter != eof) {
//		v1.push_back(*item_iter++);
//	}
//	for (string e :v1) {
//		item_out = e;
//	}
//}


//test 10.30
//int main() {
//	istream_iterator<int> input_iter(cin), eof;
//	ostream_iterator<int> output_iter(cout," ");
//	vector<int> v1;
//	while (input_iter != eof) {
//		v1.push_back(*input_iter++);
//	}
//	sort(v1.begin(), v1.end(), [](int a, int b) {return a > b; });
//	for (auto e : v1) {
//		output_iter = e;
//	}
//	cout << endl;
//}

//test 10.31
//int main() {
//	istream_iterator<int> input_iter(cin), eof;
//	ostream_iterator<int> output_iter(cout," ");
//	vector<int> v1;
//	vector<int> v2;
//
//	while (input_iter != eof) {
//		v1.push_back(*input_iter++);
//	}
//	sort(v1.begin(), v1.end(), [](int a, int b) {return a > b; });
//	unique_copy(v1.begin(), v1.end(), back_inserter(v2));
//	for (auto e : v2) {
//		output_iter = e;
//	}
//	cout << endl;
//}

//test 10.33
//int main() {
//	ifstream in ("input.txt");
//	istream_iterator<int> item_iter(in), eof;
//	ofstream out1("output1.txt");
//	ofstream out2("output2.txt");
//	ostream_iterator<int> item_out 1(out1,"   ");
//	ostream_iterator<int> item_out2(out2, "   ");
//	vector<int> v1;
//	while (item_iter != eof) {
//		v1.push_back(*item_iter++);
//	}
//	for (int e :v1) {
//		if (e % 2) {
//			item_out1 = e;
//			out1 << endl;
//		}
//		else {
//			item_out2 = e;
//			out2 << endl;
//		}
//	}
//}

//test 10.34
//int main() {
//	vector<int> v1{ 1,2,3,4,5,6,7,8,9,10 };
//	for (auto c = v1.crbegin(); c != v1.crend(); c++) {//一切和正常迭代器都一样，只是起始点和移动方向相反
//		cout << *c;
//	}
//}
//

//test 10.35
//int main() {
//	vector<int> v1{ 1,2,3,4,5,6,7,8,9,10 };
//	auto c = v1.end();
//	while (c != v1.begin()) {
//		c--;
//		cout << *c;
//	}
//	
//}
//

//test 10.36
//int main() {
//	list<int> l1 = { 0,1,2,3,4,5,6,7,0,8,9,10 };
//	auto wc = find(l1.crbegin(), l1.crend(), 0);
//	int count = 1;
//	wc++;
//	for (auto c = l1.begin(); c != wc.base(); c++)
//		count++;
//	cout << count;
//
//}


//test 10.37
//int main() {
//	vector<int> v1{ 1,2,3,4,5,6,7,8,9,10 };
//	list<int> l1;
//	int count = 1;
//	for (vector<int>::iterator c = v1.begin(); c != v1.end(); c++, count++)
//	{
//		if (count > 2 && count < 8) {
//			l1.push_front(*c);
//		}
//	}
//	for (auto sz : l1) {
//		cout << sz;
//	}
//}

//test 10.42
//void elimDups_list(list<string>& words) {
//	words.sort();
//	words.unique();
//}
//int main() {
//	list<string> words;
//	string s1;
//	while (cin >> s1)
//		words.push_back(s1);
//	elimDups_list(words);
//	for (auto c : words) {
//		cout << c<<"    ";
//	}
//
//}


