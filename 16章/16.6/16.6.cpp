#include<iterator>
#include<iostream>
using namespace std;
template<typename T, unsigned N>
const T* my_begin(const T(&s)[N]) {
	return &s[0];
}
template<typename T, unsigned N>
const T* my_end(const T(&s)[N]) {
	return &s[0]+N;
}

int main() {
	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };
	string s2[3] = { "hello","world","!" };
	auto c1 = my_begin(s);
	cout << *c1 << endl;
	my_begin(s2);
	auto c2 = my_begin(s2);
	cout << *c2 << endl;
	return 0;
}