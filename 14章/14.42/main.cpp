#include<algorithm>
#include<iostream>
#include<vector>
#include<functional>
using namespace std;

int main() {
	//a.ͳ�ƴ���1024��ֵ�м���
	vector<int> v1{ 1,1234,3225,3,2342,2423,1321,321,13 };
	cout << count_if(v1.begin(), v1.end(), bind(greater<int>(), placeholders::_1, 1024)) << endl;//�����placeholderҪдȫ��ֱ����д_1����дusing std::placeholders::_1;

	//b.�ҵ���һ��������pooh���ַ���
	vector<string>v2{ "pooh","pooh","poooh","poh" };
	string target("pooh");
	auto c = find_if(v2.begin(), v2.end(), bind(not_equal_to<string>(), placeholders::_1, "pooh"));//ͬһ��bind��ռλ��Ҫ��1��10������д
	cout << *c << endl;

	//c.�����е�ֵ*2
	vector<int>v3{ 1,2,3,4,5,6,7 };
	transform(v3.begin(), v3.end(), v3.begin(), bind(multiplies<int>(), placeholders::_1, 2));
	for (auto d : v3)
		cout << d << endl;
}