#include<functional>
#include<vector>
#include<string>
#include<map>
#include<iostream>
using namespace std;
function<int(int, int)> f1 = plus<int>();
function<int(int, int)> f2 = minus<int>();
function<int(int, int)> f3 = multiplies<int>();
function<int(int, int)> f4 = divides<int>();
map<string, function<int(int, int)>> caculator = { {"+",f1},{"-",f2},{"*",f3},{"/",f4} };
int main() {
	string s1;
	int i1 = 0;
	int i2 = 0;
	
	cout << "input the first number";
	cin >> i1;
	cout << "input the function you want";
	cin >> s1;
	cout << "input the second number";
	cin >> i2;
	cout << "the result is" << endl;;
	cout << caculator[s1](i1, i2) << endl;

	
}