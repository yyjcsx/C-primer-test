#include<iostream>
#include<string.h>
#include<vector>
#include"chapter6.h"
//#define NDEBUG
using namespace std;

//test 6.3,6.4
//int fact(int a) {
//	if (a == 0)
//		return 1;
//	if (a < 0)
//	{
//		cout << "���벻����С��0" << endl;
//		return 0;
//	}
//	if (a>0)
//	{
//		int result = 1;
//		while (a > 0) {
//			result *= a--;
//		}
//		return result;
//	}
//		
//}
//int main() {
//	int a;
//	cout << "������Ҫ��׳˵�����" << endl;
//	cin >> a;
//	cout << "���Ϊ" << fact(a) << endl;
//	return 0;
//}

//test 6.5
//int abs2(int& a) {
//	if (a >= 0) return a;
//	else {
//		a = -a;
//		return a;
//	}
//}
//int main() {
//	cout << "������Ҫȡ����ֵ����" << endl;
//	int a;
//	cin >> a;
//	abs2(a);
//	cout << a << endl;
//	return 0;
//}

//test 6.6
//int count_calls(int a) {
//	int b = a + 1;
//	static int ctr = 0;
//	return ++ctr*a*b;
//}

//test 6.7
//int count_calls() {
//	
//	static int ctr = 0;
//	return ++ctr;
//}
//int main() {
//	for (int i = 0; i != 10; i++) {
//		cout << count_calls() << endl;
//	}
//	return 0;
//}


//test 6.8,6.9
//int main() {
//	int a;
//	cout << "������Ҫ��׳˵�����" << endl;
//	cin >> a;
//	cout << "���Ϊ" << fact(a) << endl;
//	return 0;
//}

//test 6.10
//void change(int* numa, int* numb) {
//	int c;
//	c = *numa;
//	*numa = *numb;
//	*numb = c;
//}
//int main() {
//	int i = 42, j = 0;
//	change(&i, &j);
//	cout << "i=" <<i<<  endl;
//	cout << "j=" <<j<<  endl;
//	return 0;
//}

//test 6.11
//void reset(int& i) {
//	i = 0;
//}
//int main() {
//	int i = 42;
//	reset(i);
//	cout << i << endl;
//}

//test 6.12
//void change(int &i,int&j) {
//	int c;
//	c = i;
//	i = j;
//	j = c;
//}
//int main() {
//	int a = 45, b = 0;
//	change(a, b);//ֻ�����õ�ʱ����ʵ�ΰ����β��ϣ�����Ǵ���ָ�����ǿ�������ʽ���ڲ�ָ������ָ���ַ��ͬ��ֻ��ָ���Ŀ��һ��
//	cout << "a = " << a << "b = " << b << endl;
//	return 0;
//}

//test 6.15
//1.string���Ͷ���ϴ󣬲������ô��ݿ��Ա���Ը����͵Ŀ�������ʡ�ռ䣬����Ϊs�ں����в���Ҫ�ı䣬��˲��ó������ã�occurs��Ҫ��ֵ������
//�����е�ֵ���ı䣬��������ͨ���á�
//2.c��char���ͣ���ռ�ռ��С������Ҫ����������ʽ��ֱ��ֵ���ݼ���
//3.sΪ��ͨ���ÿ��ܻᵼ�����ڳ����б��޸ģ������ϳ����⣻occursΪ�������ûᵼ����ֵһֱΪ0.�޷��𵽼���Ч����

//test 6.17
//bool judge_uppercase(const string& s) {
//	for (auto c = 0; c != s.size(); ++c) {
//		if (s[c] >= 'A' && s[c] <= 'Z')
//			return true;
//		
//	}
//	
//	return false;
//}
//
//void change_uppercase(string &s2) {
//	for (auto c = 0; c != s2.size(); ++c) {
//		if (s2[c] >= 'A' && s2[c] <= 'Z')
//			s2[c] = s2[c] - 'A' + 'a';
//
//	}
//}
//
//int main() {
//	string s1 = "Hello World", s2 = "hello world";
//	change_uppercase(s1);
//	string a = s1;
//	bool b = judge_uppercase(s2);
//	cout << "s1 = " << a << " s2 = " << b << endl;
//	return 0;
//}


//test 6.18
//(a) bool compare(const matrix& m1, const matrix &m2);
//(b)
//vector<int>::iterator change_val(int, vector<int>::iterator);


//test 6.21
//int compare(int a, const int* p) {//PS:�˴�����������ͨintʵ�Σ������ȥ��const�޷�����constʵ��
//	return (a > *p) ? a : *p;
//}
//int main() {
//	int val1, val2;
//	cin >> val1 >> val2;
//	int a = val1;
//	const int* p = &val2;//�μǸ�ָ�븳ֵ���ǰ���ָ����ĵ�ַ����ָ�룬ָ���ʼ����ʱ����ֱ�Ӹ�����ֵ����int *p = 42,Ӧ��int i = 42;int *p = &i;
//	
//	cout << compare(a, p) << endl;
//	return 0;
//
//}


//test 6.22
//void exchange_pointer(int* &a ,int* &b) {//����a��b��һ�����ã�Ȼ�����ö�����һ��int���͵�ָ��
//	int *c;//�����м����Ӧ����ָ�룬��ab�����ö���
//	c = a;
//	a = b;
//	b = c;
//}
//int main() {
//	int val1, val2;
//	cin >> val1 >> val2;
//
//	int *a = &val1;
//	int *p = &val2;//�μǸ�ָ�븳ֵ���ǰ���ָ����ĵ�ַ����ָ�룬ָ���ʼ����ʱ����ֱ�Ӹ�����ֵ����int *p = 42,Ӧ��int i = 42;int *p = &i;
//	cout << "a = " << a << " p = " << p << endl;
//	exchange_pointer(a, p);
//	cout << "a = "<<a<<" p = "<<p << endl;
//	return 0;
//
//}

//test 6.23
//void print1(const int a) {
//	cout << a << endl;
//}
//void print2(const int j[],size_t n) {//�����������Ϊ�������룬�ǲ��ܵõ����ĳ��ȵģ���Ϊ����ȥ����һ��ָ�룬ֻ���ټ�һ����ʾ���鳤�ȵĲ���
//	for (auto i = 0; i != n; i++) {
//		cout << j[i] << endl;
//	}
//}
//int main() {
//	int i = 0;
//	int j[2] = { 0,1 };
//	print1(i);
//	print2(j,2);
//}

//test 6.25
//int main(int argc, char** argv) {
//	string s2;
//	
//	for(auto i = 0;i!=argc;i++)
//	{
//		s2 += argv[i];
//		
//		
//	}
//	cout << s2 << endl;
//	
//}

//test 6.26
//int main(int argc, char** argv) {
//
//	for(auto i = 0;i!=argc;i++)
//	{
//		
//		cout <<"argv[" <<i <<"] = " << argv[i] << endl;
//	}
//	return 0;
//}

//test 6.27
//int initial_sum(initializer_list<int> list) {
//	int sum = 0;
//	for (auto c = list.begin(); c != list.end(); c++) {
//		sum += *c;
//	}
//	return sum;
//}
//int main() {
//	cout<<initial_sum({ 1, 2, 3, 4, 5 });
//}

//test 6.28
//bool str_subrange(const string& str1, const string str2) {
//    // ��С��ͬ����ʱ����ͨ����������жϽ����Ϊ����ֵ
//    if (str1.size() == str2.size())
//        return str1 == str2;        // ��ȷ��== ��������ز���ֵ
//    // �õ��϶� string �����С
//    auto size = (str1.size() < str2.size())
//        ? str1.size() : str2.size();
//    // ������� string ����Ķ�Ӧ�ַ��Ƿ���ȣ��Խ϶̵��ַ�����Ϊ��
//    for (decltype(size) i = 0; i != size; ++i) {
//        if (str1[i] != str2[i])
//            return;                 // ���� #1��û�з���ֵ����������������һ����
//    }
//    // ���� #2��������������δ�����κ�ֵ�ͽ����˺�����ִ��
//    // ���������ܼ�鲻����һ����
//}
////Visio Studio��������error������Ҫ�з���ֵ��

//test 6.33
//int print(vector<int> v1 ,int num) {
//	int lenth = v1.size();
//	if (!v1.empty() && num < lenth) {
//		cout << v1[num];
//		print(v1, num + 1);//��ν�ݹ�����ں������е��øú���
//	}
//	return 0;
//}
//
//int main() {
//	vector<int> v1{ 1,2,3,4,5,6,7,8,9 };
//	print(v1, 0);
//}

//test 6.36,6.37
string(&arrptr())[10];
//���ͱ�����ʽ
//using s10 = string[10];
//s10& func();

//β�÷�������
//auto func2() -> string(&)[10];

//decltype  һ�������ֻ��֪�����صľ�������ʱ��Ż��ã���Ϊ��Ҫ��decltype�д������Ķ���
//string(&s1)[10];
//decltype(s1) fuc3();

//test 6.38
//int odd[] = {1,3,5,7,9};
//int even[] = { 2,4,6,8,10 };
//decltype(odd) &arrPtr(int i) {
//	return (i % 2) ? (odd) : (even);//���ﷵ�ص���ָ������ã���������һ����ַ����õ�����Ԫ����Ҫ������
//}
//int main() {
//	cout<<arrPtr(5);
//}

//test 6.42
//string make_plural(size_t ctr, const string& word, const string& ending = "s")
//{
//	return (ctr > 1) ? word + ending : word;
//}
//
//int main() {
//	cout<<make_plural(5, "success", "es")<<endl;//��ס�е�Ҫ��es
//	cout << make_plural(5, "failure") << endl;;
//}


//constexpr��������
//const int func() {
//    return 10;
//}
//main() {
//    int arr[func()];//�����ά���ڱ����ʱ��Ӧ����֪
//}
//error : ���������ڳ������ʽ�б�����г���ֵ


//test 6.47
//int print(vector<int> v1 ,int num) {
//	int lenth = v1.size();
//	if (!v1.empty() && num < lenth) {
//		cout << v1[num] << endl;;
//#ifndef NDEBUG
//		cout << "��ʱ����Ĵ�СΪ" << v1.size() << endl;
//		
//#endif 
//
//		print(v1, num + 1);//��ν�ݹ�����ں������е��øú���
//	}
//	return 0;
//}
//int main() {
//	vector<int> v1{ 1,2,3,4,5,6,7,8,9 };
//	print(v1, 0);
//}


//test 6.51
//��֤���ɲ���д

//test 6.54
//int func(int, int);
//vector<int (int, int)> s1;


//����ָ��Ҫ��Ӹ�ϰ��
//test 6.55
//int func_plus(int a, int b) {
//	return a + b;
//}
//int func_sub(int a, int b) {
//	return a - b;
//}
//int func_multi(int a, int b) {
//	return a * b;
//}
//int func_div(int a, int b) {
//	return a / b;
//}
////typedef��ʽ
//typedef  int(*p)(int, int);//�μ�typedef��˳��������˳��ͬ��������������м�
//vector<p> s1 = { *func_plus,*func_sub,*func_multi,*func_div };
//
//
////����ͨ�ķ�ʽ��ע������*Ҫ�����ţ����ﵽ�������������Ϊ��ָ��->ָ�����Ϊ(int,int)��ָ��->ָ�򷵻�����Ϊint������Ϊ(int,int)��ָ��
////�μ����ﲻ�����Ų��У���
////vector<int(*)(int,int)> s1 = {*func_plus,*func_sub,*func_multi,*func_div };
//
////decltypeģʽ
////vector<decltype(func_div)*> s1 = { *func_plus,*func_sub,*func_multi,*func_div };
//
//
//int main() {
//	cout << s1[0](1,2) << endl;
//	cout << s1[1](1, 2) << endl;
//	cout << s1[2](1, 2) << endl;
//	cout << s1[3](1, 2) << endl;
//
//}

