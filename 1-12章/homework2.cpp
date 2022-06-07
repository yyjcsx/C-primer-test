//#include<iostream>
//#include "Sales_item.h"
//#include<string.h>
//using namespace std;

//test 2.10

//
//std::string global_str;
//int global_int;
//int main() {
//    int local_int;
//    std::string local_str;
//    std::cout << "global_str = " << global_str << std::endl;
//    std::cout << "global_int = " << global_int << std::endl;
//    std::cout << "local_str = " << local_str << std::endl;
//    std::cout << "local_int = " << local_int << std::endl;
//    return 0;
//}
//test 2.16
//int main() {
//	int i = 0,&r1 = i;
//	double d = 0, & r2 = d;
//	i = r2;
//	cout << i << endl;
//	return 0;
//}

//test 2.18
//int main() {
//	int* pi = nullptr;
//	int i = 42;
//	
//	pi = 0;
//	cout << pi << endl;
//	//cout << *pi + 5 << endl;
//	pi = &i;
//	cout << pi << endl;
//	cout << pi+5 << endl;
//	cout << *pi + 5 << endl;
//	return 0;
//}


//test 2.39
//#include <iostream>
//
//struct Foo { /* 此处为空 */ } // 注意：没有分号
//int main() {
//    return 0;
//}
//
//struct Sales_data {
//public:
//	string bookNumber;
//	double inicialprice;
//	double sellingprice;
//	int number;
//	double sum = sellingprice * number;
//	string witten_day;
//	double discount = sellingprice/inicialprice;
//};