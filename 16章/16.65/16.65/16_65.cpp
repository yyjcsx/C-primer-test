#include<string>
#include<sstream>
#include<iostream>
using namespace std;
template<typename T> string debug_rep(const T& t) {
	ostringstream ret;
	ret << t;
	cout << "const T&" << endl;
	return ret.str();
}

template<typename T> string debug_rep(T* p) {
	ostringstream ret;
	ret << "pointer: " << p;
	cout << "T* " << endl;
	if (p)
		ret << " " << debug_rep(*p);
	else
		ret << "null pointer";
	return ret.str();
}
//string debug_rep(const string& s) {
//	cout << "const string& " << endl;
//	return '"' + s + '"';
//}
//string debug_rep(char* p) {
//	return debug_rep(string(p));
//}
template<> string debug_rep(const char* p) {
	cout << "using unusual template const char*" << endl;
	return debug_rep(string(p));
}
template<> string debug_rep(char* p) {
	cout << "using unusual template char*" << endl;
	return debug_rep(string(p));
}

int main() {
	string c = debug_rep("hello");
	cout << c << endl;
	char src[] = "qwqewqe";
	char* s2 = src;
	string c2 = debug_rep(s2);
	cout << c2 << endl;
}