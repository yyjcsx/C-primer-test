#include<iostream>
using namespace std;
template <typename T> ostream& print(ostream& os, const T& t) {
	return os << t;
}
template<typename T, typename...Args>ostream& print(ostream& os, const T& t,const Args&...rest) {
	os << t << ",";
	return print(os, rest...);
}

int main() {
	int i = 5;
	string s = "hi";
	print(cout,i);
	print(cout, i, s);
	print(cout, s, i, 42, "h123i");

}