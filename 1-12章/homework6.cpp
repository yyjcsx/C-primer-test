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
//		cout << "输入不可以小于0" << endl;
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
//	cout << "输入想要求阶乘的数字" << endl;
//	cin >> a;
//	cout << "结果为" << fact(a) << endl;
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
//	cout << "输入想要取绝对值的数" << endl;
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
//	cout << "输入想要求阶乘的数字" << endl;
//	cin >> a;
//	cout << "结果为" << fact(a) << endl;
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
//	change(a, b);//只有引用的时候是实参绑定在形参上，如果是传递指针则还是拷贝的形式，内层指针和外层指针地址不同，只是指向的目标一致
//	cout << "a = " << a << "b = " << b << endl;
//	return 0;
//}

//test 6.15
//1.string类型对象较大，采用引用传递可以避免对该类型的拷贝，节省空间，又因为s在函数中不需要改变，因此采用常量引用，occurs需要传值出来，
//函数中的值被改变，所以是普通引用。
//2.c是char类型，所占空间较小，不需要采用引用形式，直接值传递即可
//3.s为普通引用可能会导致其在程序中被修改，不符合程序本意；occurs为常量引用会导致其值一直为0.无法起到计数效果。

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
//int compare(int a, const int* p) {//PS:此处可以引入普通int实参，但如果去掉const无法引入const实参
//	return (a > *p) ? a : *p;
//}
//int main() {
//	int val1, val2;
//	cin >> val1 >> val2;
//	int a = val1;
//	const int* p = &val2;//牢记给指针赋值就是把所指对象的地址赋给指针，指针初始化的时候不能直接给字面值，如int *p = 42,应该int i = 42;int *p = &i;
//	
//	cout << compare(a, p) << endl;
//	return 0;
//
//}


//test 6.22
//void exchange_pointer(int* &a ,int* &b) {//首先a，b是一个引用，然后引用对象是一个int类型的指针
//	int *c;//这里中间对象应该是指针，即ab的引用对象
//	c = a;
//	a = b;
//	b = c;
//}
//int main() {
//	int val1, val2;
//	cin >> val1 >> val2;
//
//	int *a = &val1;
//	int *p = &val2;//牢记给指针赋值就是把所指对象的地址赋给指针，指针初始化的时候不能直接给字面值，如int *p = 42,应该int i = 42;int *p = &i;
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
//void print2(const int j[],size_t n) {//如果将数组作为参数传入，是不能得到他的长度的，因为传进去的是一个指针，只能再加一个表示数组长度的参数
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
//    // 大小相同：此时用普通的相等性来判断结果作为返回值
//    if (str1.size() == str2.size())
//        return str1 == str2;        // 正确：== 运算符返回布尔值
//    // 得到较短 string 对象大小
//    auto size = (str1.size() < str2.size())
//        ? str1.size() : str2.size();
//    // 检查两个 string 对象的对应字符是否相等，以较短的字符长度为限
//    for (decltype(size) i = 0; i != size; ++i) {
//        if (str1[i] != str2[i])
//            return;                 // 错误 #1：没有返回值，编译器将报告这一错误
//    }
//    // 错误 #2：控制流可能尚未返回任何值就结束了函数的执行
//    // 编译器可能检查不出这一错误
//}
////Visio Studio编译结果：error：函数要有返回值。

//test 6.33
//int print(vector<int> v1 ,int num) {
//	int lenth = v1.size();
//	if (!v1.empty() && num < lenth) {
//		cout << v1[num];
//		print(v1, num + 1);//所谓递归就是在函数体中调用该函数
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
//类型别名形式
//using s10 = string[10];
//s10& func();

//尾置返回类型
//auto func2() -> string(&)[10];

//decltype  一般该类型只有知道返回的具体对象的时候才会用，因为需要在decltype中传入具体的对象
//string(&s1)[10];
//decltype(s1) fuc3();

//test 6.38
//int odd[] = {1,3,5,7,9};
//int even[] = { 2,4,6,8,10 };
//decltype(odd) &arrPtr(int i) {
//	return (i % 2) ? (odd) : (even);//这里返回的是指针的引用，本质上是一个地址，想得到具体元素需要解引用
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
//	cout<<make_plural(5, "success", "es")<<endl;//记住有的要加es
//	cout << make_plural(5, "failure") << endl;;
//}


//constexpr函数测试
//const int func() {
//    return 10;
//}
//main() {
//    int arr[func()];//数组的维度在编译的时候应该已知
//}
//error : 函数调用在常量表达式中必须具有常量值


//test 6.47
//int print(vector<int> v1 ,int num) {
//	int lenth = v1.size();
//	if (!v1.empty() && num < lenth) {
//		cout << v1[num] << endl;;
//#ifndef NDEBUG
//		cout << "此时对象的大小为" << v1.size() << endl;
//		
//#endif 
//
//		print(v1, num + 1);//所谓递归就是在函数体中调用该函数
//	}
//	return 0;
//}
//int main() {
//	vector<int> v1{ 1,2,3,4,5,6,7,8,9 };
//	print(v1, 0);
//}


//test 6.51
//验证即可不用写

//test 6.54
//int func(int, int);
//vector<int (int, int)> s1;


//函数指针要多加复习！
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
////typedef方式
//typedef  int(*p)(int, int);//牢记typedef的顺序与正常顺序不同，代替对象名在中间
//vector<p> s1 = { *func_plus,*func_sub,*func_multi,*func_div };
//
//
////最普通的方式，注意这里*要加括号，从里到外表明对象属性为：指针->指向参数为(int,int)的指针->指向返回类型为int，参数为(int,int)的指针
////牢记这里不加括号不行！！
////vector<int(*)(int,int)> s1 = {*func_plus,*func_sub,*func_multi,*func_div };
//
////decltype模式
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

