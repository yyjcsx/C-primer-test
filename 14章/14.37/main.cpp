#include"check_emplace.h"
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v1 = { 1,2,3,4,5,5,6,7,8,9,10 };
	for_each(v1.begin(), v1.end(), check_emplace(5, 7));
	for (auto c = v1.begin(); c != v1.end(); c++) {
		cout << *c << endl;
	}
}
