#include<vector>
#include<iostream>
#include<string>
using std::vector;
using std::string;
template<typename T> int count_num(vector<T>& v1, T exp) {
	int j = 0;
	for (auto c : v1) {
		if (c == exp)
			j++;
	}
	return j;
}
//16.64
template<> int count_num(vector<const char*>& v1, const char* exp)
{
	int j = 0;
	for (auto c : v1) {
		if (!strcmp(c,exp))//注意strcmp是字符串相等返回0
			j++;
	}
	std::cout << "using the const char* template" << std::endl;
	return j;
}

int main() {
	vector<int> v1{ 1,1,1,2,3,5 };
	int m = count_num(v1, 1);
	std::cout <<"vector<int> result "<< m << std::endl;
	vector<double> d1{ 1.1,1.1,1.1,1.1,2,2,3,5 };
	int n = count_num(d1, 1.1);
	std::cout << "vector<double> result " << n << std::endl;
	vector<string> s1{ "hello","world","hello","like"};
	string s2 = "hello";
	int s = count_num(s1, s2);
	std::cout << "vector<string> result " << s << std::endl;
	//16.64
	vector<const char*> c1{ "hello","hello","hello","world"};
	int c = count_num(c1, "hello");
	std::cout << "vector<const char*> result " << c << std::endl;


}