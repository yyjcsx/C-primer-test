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
	for (typename T::const_iterator c = t1.begin(); c != t1.end(); c++)//ǰ��t1��const T&���ͣ�������ֻ��ѡ��const_iterator������ѡ����ͨ��iterator
		cout << *c;
	cout << endl;
}
#endif // !1



