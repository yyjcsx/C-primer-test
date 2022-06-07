#include<iostream>
#include<string>
#include<sstream>
using namespace std;
template <typename T> ostream& print(ostream& os, const T& t) {
	return os << t;
}
template<typename T, typename...Args>ostream& print(ostream& os, const T& t, const Args&...rest) {
	os << t << ",";
	return print(os, rest...);
}
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
string debug_rep(const string& s) {
	cout << "const string& " << endl;
	return '"' + s + '"';
}
string debug_rep(char* p) {
	return debug_rep(string(p));
}
template<typename...Args>
ostream& errMsg(ostream& os, const Args&...rest)
{
	return print(os, debug_rep(rest)...);
}

int main() {
	int i = 5;
	string s = "hello";
	
	errMsg(cout, i, s, 42);
}