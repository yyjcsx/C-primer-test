#include<iostream>
using namespace std;
template<typename T1,typename T2>
auto sum(const T1& a, const T2& b)->decltype(a + b)
{
	return a + b;
	}

int main() {
	auto a = sum(1, 1);
	cout << "the result is  " << a << endl;
	auto b = sum(1, 1.1);
	cout << "the result is  " << b << endl;
	auto c = sum(1, 1.1f);
	cout << "the result is  " << c << endl;
}