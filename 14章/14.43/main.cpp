#include<algorithm>
#include<iostream>
#include<vector>
#include<functional>
using namespace std;

int main() {
	vector<int> v1 = { 1,2,3,4,5,6,7 };
	int d = 1;
	auto c = find_if(v1.begin(), v1.end(), bind(not_equal_to<int>(), bind(modulus<int>(), placeholders::_1, d), 0));
	if (c == v1.end())
		cout << "���Ա����е�int����" << endl;
	else
		cout << "�����Ա�����int����" << endl;
	
}