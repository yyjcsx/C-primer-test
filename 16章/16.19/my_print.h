#pragma once
#ifndef MY_SCREEN_H
#define MY_SCREEN_H
#include<iostream>

using namespace std;
//template<typename T>
//16.19
//void my_print(const T& t1) {
//	for (typename T::size_type c = 0; c != t1.size(); c++)
//		cout << t1[c] ;
//	cout << endl;
//}

//16.20
template<typename T>
void my_print(const T& t1) {
	for (typename T::const_iterator c = t1.begin(); c != t1.end(); c++)//前面t1是const T&类型，迭代器只能选择const_iterator，不能选择普通的iterator
		cout << *c;
	cout << endl;
}
#endif // !1



