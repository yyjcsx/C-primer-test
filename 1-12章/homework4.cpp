#include<iostream>
#include<string.h>
#include<vector>
#include<cstring>
using namespace std;

//int main() {
//	int x[10]; int* p = x;
//	cout << sizeof(x) / sizeof(*x) << endl;
//	cout << sizeof(p) / sizeof(*p) << endl;
//	return 0;
//}

//TEST 4.21
//int main() {
//	vector<int> v1 = { 0,1,2,3,4,5 };
//	for (auto c = v1.begin(); c != v1.end(); c++) {
//		string s1 = (*c % 2) ? "is odd" : "is double";
//		cout << *c << s1 << endl;
//	}
//	return 0;
//}

//test 4.22

//version 1
//int main() {
//	int grade{ 0 };
//	cin >> grade;
//	string finalgrade = (grade > 90) ? "high pass" : (grade < 75) ? ((grade < 60) ? "fail" : "pass"):"lowpass";
//	cout << finalgrade << endl;
//	return 0;
//}

//version 2
//int main() {
//	int grade{ 0 };
//	cin >> grade;
//	string finalgrade;
//	if (grade > 90) {
//		finalgrade = "high pass";
//	}
//	else {
//		if (grade > 75) {
//			finalgrade = "low pass";
//		}
//		else {
//			if (grade > 60) {
//				finalgrade = "pass";
//			}
//			else {
//				finalgrade = "fail";
//			}
//		}
//	}
//	cout << finalgrade << endl;
//	return 0;
//}