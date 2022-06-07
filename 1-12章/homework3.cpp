#include<iostream>
#include "Sales_item.h"
#include<string.h>
#include<vector>
#include<cstring>
using namespace std;

//test 3.2
//int main() {
//	string line;
//	string word;
//	//getline(cin, line);
//	//cout << line << endl;
//	cin >> word;
//	cout << word << endl;
//	return 0;
//}

//test 3.3
//int main() {
//	string s1, s2;
//	cin >> s1 >> s2;
//	if (s1 == s2) {
//		cout << "they are equal" << endl;
//	}
//	else {
//		string s3 = (s1 > s2) ? s1 : s2;
//		cout << s3 << endl;
//	}
//	return 0;
//}

//int main() {
//	string s1, s2;
//	cin >> s1 >> s2;
//	if (s1.size() == s2.size()) {
//		cout << "their length are equal" << endl;
//	}
//	else {
//		string s3 = (s1.size() > s2.size()) ? s1 : s2;
//		cout << s3 << endl;
//	}
//	return 0;
//}

//test 3.5
//int main() {
//	string s1 , s2;
//	while (cin >> s1) {
//		
//		s2 = s2 +"\40" + s1;
//		cout << s2 << endl;
//	}
//	return 0;
//}

//test 3.6

//int main() {
//	string s1("STRING");
//	cout << s1 << endl;
//	for (char &c : s1)
//	{
//		c = 'X';
//	}
//	cout << s1 << endl;
//	return 0;
//}

//test 3.7
//for版本：
//int main() {
//	string s1("STRING");
//	cout << s1 << endl;
//	for (auto c = begin(s1) ;c!=end(s1); c++)
//	{
//		*c = 'X';
//	}
//	cout << s1 << endl;
//	return 0;
//}

//while版本
//int main() {
//	string s1("STRING");
//	cout << s1 << endl;
//	auto c = begin(s1);
//	while (c!=end(s1))
//	{
//		*c = 'X';
//		c++;
//	}
//	cout << s1 << endl;
//	return 0;
//}

//test 3.10

//int main() {
//	string s1="STRING:STRING";
//	string s2 = {};
//	cout << s1 << endl;
//	int i = 0;
//	for (auto c = begin(s1) ;c!=end(s1); c++)
//	{	
//		if (!ispunct(*c)) {
//			cout << *c << endl;
//			s2 += *c;
//			
//			
//		}
//	}
//	cout << s2 << endl;
//	return 0;
//}

//test 3.14
//int main() {
//	int word;
//	vector<int> text;
//	while(cin >> word)
//	{
//		text.push_back(word);
//		int i = text.size();
//		for (int j = 0; j != i; j++)
//		{
//			cout << text[j]<< endl;
//	}
//	}
//	
//	return 0;
//	
//}

//test 3.15
//int main() {
//	string word;
//	vector<string> text;
//	while (cin >> word)
//	{
//		text.push_back(word);
//		int i = text.size();
//		for (int j = 0; j != i ; j++)
//		{
//			cout << text[j] << endl;
//		}
//	}
//
//	return 0;
//}

//test 3.16
//int main() {
//	vector<int> v1;
//	cout << v1.size() << endl;
//	return 0;
//}

//test 3.17
//int main() {
//	string word;
//	vector<string> text;
//	while (cin >> word)
//	{	
//		if (word=="XX")
//		{
//			break;
//		}
//		text.push_back(word);
//		int i = text.size();
//
//	}
//	for (auto c = text.begin(); c != text.end(); c++)
//	{
//		int length = c->size();
//		for (int d = 0; d != length; d++) {
//			(*c)[d] = toupper((*c)[d]);
//		}
//		cout << *c << endl;
//	}
//
//	return 0;
//}


//test3.20
//int main() {
//	int word;
//	vector<int> text;
//	while(cin >> word)
//	{
//		if (word == 9999999)
//		{
//			break;
//	}
//		text.push_back(word);
//
//	}
//	int i = text.size();
//	for (int j = 0; j != i; j++)
//	{
//		if (j >= i-j-1) {
//			break;
//		}
//		int sum = 0;
//		sum = text[j] + text[i - j-1];
//		cout << text[j] << "+" << text[i - j-1] << "=" << sum << endl;
//	}
//	return 0;
//	
//}


//test 3.21
//int main() {
//	vector<int> s1(10.42);
//	int length = 0;
//		for (auto c = s1.begin(); c != s1.end(); c++)
//		{
//			length++;
//	}
//		cout << length << endl;
//	return 0;
//}

//test 3.22
//int main() {
//	string word, word2 = { },word3;
//	vector<string> text;
//	while (getline(cin , word))
//	{	
//
//		text.push_back(word);
//		int i = text.size();
//
//	}
//
//	for (auto c = text.begin(); c != text.end(); c++)
//	{
//		cout << *c << endl;
//		if (!c->empty()) {
//			break;
//		}
//		int length = c->size();
//		for (int d = 0; d != length; d++) {
//			(*c)[d] = toupper((*c)[d]);
//		}
//		cout << *c << endl;
//	}
//
//	return 0;
//}

//test 3.23
//int main() {
//	vector<int> s1{ 1,2,3,4,5,6,7,8,9,10 };
//	for (auto c = s1.begin(); c != s1.end(); c++) {
//		*c = (*c) * 2;
//		cout << *c<< endl;
//	}
//	return 0;
//
//}


//test 3.24
//int main() {
//	int word;
//	vector<int> text;
//	while(cin >> word)
//	{
//		if (word == 9999999)
//		{
//			break;
//	}
//		text.push_back(word);
//
//	}
//	auto i = text.end();
//	for (auto j = text.begin(); j != i; j++)
//	{
//		i--;//既然迭代器之间无法通过算术方法计算解决，那么可以通过首元素++，尾元素--的方式实现后半段不重复
//		int sum = 0;
//		sum = *j + *i;
//		cout << *j << "+" << *i << "=" << sum << endl;
//	}
//	return 0;
//	
//}

//test 3.25
//int main() {
//	vector<unsigned> scores(11, 0);
//	unsigned grade;
//	while (cin >> grade) {
//		
//		if (grade <= 100) {
//			auto c = scores.begin();
//			int n = grade / 10;
//			++*(c + n);//???为什么这里++i和i++区别这么大？为啥i++加不上去数呢
//			cout << *(c + n) << endl;
//		}
//		else {
//			if (grade == 999) {
//				break;
//			}
//			cout << "The grade is wrong" << endl;
//			break;
//
//		}
//
//	}
//	for (auto c2 = scores.begin(); c2 != scores.end(); c2++)
//	{
//		cout << *c2 << endl;
//	}
//	return 0;
//}

//test 3.31
//int main() {
//	int s2[10] = {};
//	int j = 0;
//	for (auto i = begin(s2); i != end(s2); i++)
//	{
//		*i =j++;
//		cout << *i << endl;
//	}
//	return 0;
//}

//test 3.32
//int main() {
//	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
//	vector<int> v1(a, a + 10),v2(10,0);
//	int b[10], j = 0;
//	for (auto c = begin(a); c != end(a); c++)
//	{
//		b[j] = *c;
//		j++;
//		
//	}
//	v2 = v1;
//	for (int h = 0; h != 10; h++) {
//		cout << b[h] << endl;
//		cout << v2[h] << endl;
//	}
//	return 0;
//}

//test3.35
//int main() {
//	int a[] = { 1,2,3,4,5,6,7,8,9 };
//	for (auto c = a; c != end(a); c++)
//	{
//		*c = 0;
//	}
//	for (int i = 0; i != 9; i++) {
//		cout << a[i] << endl;
//	}
//	return 0;
//	
//}

//test3.36
//int main() {
//	int a[10] = {0, 1, 2, 3, 4, 6, 6, 7, 8, 9};
//	int b[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	vector<int> s1 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	vector<int> s2 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
//	int flag = 1;
//	if (size(a) != size(b)) {
//		cout << "they are not equal" << endl;
//	}
//	else {
//		for (int i = 0; i != size(a); i++) {
//			if (a[i] == b[i]) {
//				flag *= 1;
//			}
//			else
//			{
//				flag *= 0;
//				break;
//			}
//		}
//	}
//	if (flag == 1) {
//		cout << "a,b they are equal" << endl;
//	}
//	else {
//		cout << "a.b they are not equal" << endl;
//	}
//	if (s1 == s2) {
//		cout << "s1,s2 they are equal" << endl;
//	}
//	else {
//		cout << "s1,s2they are not equal" << endl;
//	}
//}

//test3.39
//int main() {
//	const string s1 = "hello";
//	const string s2 = "hello";
//	if (s1 == s2) {
//		cout << "they are equal" << endl;
//	}
//	else {
//		cout << "they are not equal" << endl;
//	}
//	const char ca1[] = "goodbye";
//	const char ca2[] = "goodbyeaaa";
//	int flag = strcmp(ca1, ca2);
//	if (!flag) {
//		cout << "they are equal" << endl;
//	}
//	else {
//		cout << "they are not equal" << endl;
//	}
//	return 0;
//}

//test 3.40
//int main() {
//	char c1[100] = "hello";
//	char c2[100] = "world";
//	char c3[200];
//	strcpy_s( c3,c1 );
//	strcat_s(c3, " ");
//	strcat_s(c3, c2);
//	cout << c3 << endl;
//	return 0;
//	
//}


//test3.41
//int main() {
//	int int_arr[]{ 0,1,2,3,4,5,6 };
//	vector<int> v1(begin(int_arr), end(int_arr));
//	for (auto c = v1.begin(); c != v1.end(); c++) {
//		cout << *c << endl;
//	}
//	return 0;
//}

//test 3.42
//int main() {
//	vector<int> v1{ 1,2,3,4,5 };
//	int c1[100];
//	int i = 0;
//	for (auto c = v1.begin(); c != v1.end(); c++) {
//		c1[i] = *c;
//		cout << c1[i] << endl;
//	}
//	return 0;
//}

//test 3.43
//int main()
//{
//	 int ia[3][4] = { { 0,1,2,3 }, { 4,5,6,7 }, { 8,9,10,11 } };
//	for(int(&row)[4] : ia )
//		for (int col : row) {
//			cout << col << endl;
//		}
//	return 0;
//}

//int main()
//{
//	int ia[3][4] = { { 0,1,2,3 }, { 4,5,6,7 }, { 8,9,10,11 } };
//	int i = 0, j = 0;
//	for (i=0 ; i != 3; i++)
//	{
//		for (j=0; j != 4; j++) {
//
//			cout << ia[i][j] << endl;
//		}
//	}
//	return 0;
//}

//int main() {
//	int ia[3][4] = { { 0,1,2,3 }, { 4,5,6,7 }, { 8,9,10,11 } };
//	int i = 0, j = 0;
//	for (i=0 ; i != 3; i++)
//	{
//		for (j=0; j != 4; j++) {
//
//			cout << *(*(ia+i)+j) << endl;
//		}
//	}
//	
//	return 0;
//}
//改良后的指针版本
//int main() {
//	int ia[3][4] = { { 0,1,2,3 }, { 4,5,6,7 }, { 8,9,10,11 } };
//	for(int (*p)[4]=ia;p!=end(ia);p++)
//		for (int *q = *p; q != end(*p); q++) {
//			cout << *q << endl;
//		}
//	return 0;
//}

//test 3.44
//int main()
//{
//	using x2 = int[4];
//	 int ia[3][4] = { { 0,1,2,3 }, { 4,5,6,7 }, { 8,9,10,11 } };
//	for(x2 &row : ia )
//		for (int col : row) {
//			cout << col << endl;
//		}
//	return 0;
//}