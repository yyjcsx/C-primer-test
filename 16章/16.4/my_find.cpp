#include<iterator>
#include<vector>
#include<string>
#include<list>
#include<iostream>
using namespace std;
template<typename T, typename iterator> 
iterator find_1(iterator first, iterator last, const T& t) {
	while (first != last && *first != t)
		first++;
	if (first == end)
		cout << "can not find the item" << endl;
	return first;
}

int main() {
	vector<int> v1 = { 1,2,3,4,5,6 };
	auto c = find_1(v1.begin(), v1.end(), 3);
	cout << *c << endl;
}