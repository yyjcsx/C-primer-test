#include<iostream>
#include<string>
using namespace std;
template<typename T, typename...Args> void foo(const T& t, const Args&...rest) 
{
	cout << sizeof...(Args) << endl;//·µ»Ø3
	cout << sizeof...(rest) << endl;//·µ»Ø3
}
int i = 0; double d = 3.14; string s = "this is a string";
int main() {
	foo(i, s, 42, d);
	foo("hi");
}

