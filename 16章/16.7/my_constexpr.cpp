#include<iostream>
#include<string>
using namespace std;
template <typename T, unsigned N> constexpr unsigned arr_size(const T(&s)[N]) {//constexpr�������δʣ������Ǻ�������ֻ��Ҫ���ں�����ǰ���ʾ���������˺������ɳ�������
	return N;
}
int main() {
	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };
	string s2[3] = { "hello","world","!" };
	cout << arr_size(s) << endl;
	cout << arr_size(s2) << endl;
}