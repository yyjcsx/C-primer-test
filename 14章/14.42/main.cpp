#include<algorithm>
#include<iostream>
#include<vector>
#include<functional>
using namespace std;

int main() {
	//a.统计大于1024的值有几个
	vector<int> v1{ 1,1234,3225,3,2342,2423,1321,321,13 };
	cout << count_if(v1.begin(), v1.end(), bind(greater<int>(), placeholders::_1, 1024)) << endl;//这里的placeholder要写全，直接想写_1可以写using std::placeholders::_1;

	//b.找到第一个不等于pooh的字符串
	vector<string>v2{ "pooh","pooh","poooh","poh" };
	string target("pooh");
	auto c = find_if(v2.begin(), v2.end(), bind(not_equal_to<string>(), placeholders::_1, "pooh"));//同一个bind中占位符要从1到10依次书写
	cout << *c << endl;

	//c.将所有的值*2
	vector<int>v3{ 1,2,3,4,5,6,7 };
	transform(v3.begin(), v3.end(), v3.begin(), bind(multiplies<int>(), placeholders::_1, 2));
	for (auto d : v3)
		cout << d << endl;
}