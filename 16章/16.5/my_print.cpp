#include<iostream>
#include<string>
using namespace std;
template<typename T, unsigned N> void print(T(&s)[N]) {
	for (auto elem : s)
		cout << elem << endl;
	
}
int main() {
	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };
	string s2[3] = { "hello","world","!" };
	print(s);
	print(s2);
	return 0;
}