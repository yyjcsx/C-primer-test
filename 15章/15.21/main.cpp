#include"ball.h"
#include"conical.h"
#include<iostream>
int main() {
	circle c1(24);
	ball b1(24);
	conical con1(24,34);
	square s1(20);
	std::cout << "���εı����Ϊ" << s1.acreage() << std::endl;
	std::cout << "Բ�εı����Ϊ" << c1.acreage() << std::endl;
	std::cout << "׶�εı����Ϊ" << con1.acreage() << std::endl;
	std::cout << "���εı����Ϊ" << b1.acreage() << std::endl;

}