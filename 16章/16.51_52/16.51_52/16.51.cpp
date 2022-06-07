#include<iostream>
#include<string>
using namespace std;
template<typename T, typename...Args> void foo(const T& t, const Args&...rest) 
{
	cout << sizeof...(Args) << endl;//����3
	cout << sizeof...(rest) << endl;//����3
}
int i = 0; double d = 3.14; string s = "this is a string";
int main() {
	foo(i, s, 42, d);
	foo("hi");
}

