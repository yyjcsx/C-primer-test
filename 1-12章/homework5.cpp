#include<iostream>
#include<string.h>
#include<vector>
#include<cstring>
#include<exception>
using namespace std;

//test 5.3
//int main() {
//	int sum = 0, val = 1;
//	while (val <= 10) 
//		sum += val, ++val;
//	cout << "the number is" << sum << endl;
//	return 0;
//}

//test5.5
//int main() {
//	int grade;
//	cin >> grade;
//	string scores;
//	if (grade < 60) {
//		scores = "F";
//	}
//
//	else if (grade < 70&&grade>59) {
//		scores = "G";
//}
//	else if (grade < 80 && grade>69) {
//		scores = "C";
//	}
//	else if (grade < 90 && grade>79) {
//		scores = "B";
//	}
//	else if ( grade>89) {
//		scores = "A";
//	}
//	cout << scores << endl;
//	return 0;
//}

//test 5.6
//太复杂且代码没有可读性。略过


//test 5.9
//int main() {
//	unsigned number = 0;
//	char ch;
//	while (cin >> ch) {
//	if(ch == 'a'&& ch == 'e'&& ch == 'i'&& ch == 'o'&& ch == 'u'){
//		++number;
//	}
//
//	}
//	return 0;
//}

//test 5.14
//int main() {
//
//	string word,origin_word,most_word;
//	int  number = 1,largest_number = 1;
//	while (cin >> word) {
//		
//		if (word == origin_word) {
//			
//			++number;
//			
//		}
//		else {
//			
//			if (number > largest_number) {
//				largest_number = number;
//				most_word = origin_word;
//				number = 1;
//			}
//			origin_word = word;
//		}
//		if (word == "XX")
//			if (largest_number == 1) {
//				cout << "there is no most number" << endl;
//				break;
//			}
//			else {
//				cout << largest_number << most_word << endl;
//				break;
//			}
//			
//	}
//	
//	
//}

//test 5.17
//bool check(vector<int> v1, vector<int> v2)
//{
//	int flag = 1;
//	for (auto c = v1.begin(), d = v2.begin(); c != v1.end(); ++c, ++d) {
//		if (*c != *d) {
//			flag *= 0;
//		}
//	}
//	return flag;
//}
//int main() {
//	int flag = 0;
//	vector<int> s1{ 0,1,2,3,4,5 }, s2{0,1,2};
//	if (s1.size() > s2.size()) {
//		flag = check(s2, s1);
//	}
//	if (s1.size() < s2.size()) {
//		flag = check(s1, s2);
//	}
//	cout << flag << endl;
//	return 0;
//}

//test 5.19
//int main() {
//	char ch;
//	do
//	{
//		string s1, s2;
//		
//		cout << "输入两个string" << endl;
//		cin >> s1 >> s2;
//		if (s1.size() >= s2.size()) {
//			for (auto c = s2.begin(); c != s2.end(); ++c)
//				cout << *c<<endl;
//		}
//		else{
//			for (auto c = s1.begin(); c != s1.end(); ++c)
//				cout << *c<<endl;
//		}
//		cout << "continue or not?" << endl;
//		cin >> ch;
//		
//
//	}
//	while (ch == 'y');
//
//}


//test 5.20
//int main() {
//	string word,origin_word,most_word;
//	int  number = 1,largest_number = 1;
//	while (cin >> word) {		
//		if (word == origin_word) {			
//			++number;
//			if (number == 2) {
//				cout << word << endl;
//				largest_number = 2;
//				break;
//			}
//		}
//		else {
//				number = 1;			
//				origin_word = word;
//		}
//		if (word == "XX")
//			if (largest_number == 1) {
//				cout << "there is no most number" << endl;
//				break;
//			}
//			else {				
//				break;
//			}			
//	}		
//}


//test 5.21
//int main() {
//	string word,origin_word,most_word;
//	int  number = 1,largest_number = 1;
//	while (cin >> word) {		
//		if (word == origin_word) {			
//			++number;
//			if (number == 2&&isupper(word[0]) ){
//				cout << word << endl;
//				largest_number = 2;
//				break;
//			}
//		}
//		else {
//				number = 1;			
//				origin_word = word;
//		}
//		if (word == "XX")
//			if (largest_number == 1) {
//				cout << "there is no most number" << endl;
//				break;
//			}
//			else {				
//				break;
//			}			
//	}		
//}

//test 5.22
//int main() {
//	int sz;
//	do
//	{
//		
//		cin >> sz;
//	} 
//	while (sz <= 0);
//	return 0;
//}

//test 5.23
//int main() {
//	int n1, n2;
//	cin >> n1 >> n2;
//	cout << n1 / n2 << endl;
//	return 0;
//}

//test 5.24
//int main() {
//	int n1, n2;
//	cin >> n1 >> n2;
//	if (n2 == 0) throw domain_error ("n2 can not be 0");
//	cout << n1 / n2 << endl;
//	return 0;
//}

//test 5.25
//int main() {
//	int n1, n2;
//	try
//	{
//		cin >> n1 >> n2;
//		if (n2 == 0) throw runtime_error("n2 can not be 0");
//	}
//	catch (runtime_error err)
//	{
//		cout << err.what() << "try agagin?" << endl;
//	}
//}

