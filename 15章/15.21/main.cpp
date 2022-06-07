#include"ball.h"
#include"conical.h"
#include<iostream>
int main() {
	circle c1(24);
	ball b1(24);
	conical con1(24,34);
	square s1(20);
	std::cout << "方形的表面积为" << s1.acreage() << std::endl;
	std::cout << "圆形的表面积为" << c1.acreage() << std::endl;
	std::cout << "锥形的表面积为" << con1.acreage() << std::endl;
	std::cout << "球形的表面积为" << b1.acreage() << std::endl;

}