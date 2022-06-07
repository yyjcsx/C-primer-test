//#include "Bulk_quote.h"
#include"Bulk_quote_2.h"
#include"Basket.h"
#include<iostream>
#include<vector>
#include<memory>
void print_total(const Quote& basic, size_t n);
int main() {
	//const std::string s1("9999");
	///*Bulk_quote bulk1(s1, 25, 40, 0.75);
	//
	//print_total(bulk1, 50);*/
	//Bulk_quote bulk(s1, 25, 40, 0.75);
	//const std::string s2("9999");
	//Bulk_quote_2 bulk1(s2, 25, 40, 0.75,100);
	////test 15.12
	//bulk1.Quote::debug();
	//bulk1.Bulk_quote::debug();
	//bulk1.Bulk_quote_2::debug();

	////test 15.15
	////Disc_quote Foo1;//error:无法实例化抽象类
	//Bulk_quote bulk2 = bulk;


	////test 15.27测试Bulk_quote的继承构造函数是否有用
	//bulk.Quote::debug();
	//bulk.Bulk_quote::debug();
	////test 15.28
	//std::vector<Quote> v1;
	//Quote q1("0-201", 25);
	//v1.push_back(q1);
	//v1.push_back(bulk);
	//std::cout << "Quote类不优惠情况下的花费"<<v1[0].net_price(100) << std::endl;
	//std::cout <<"Bulk_quote类优惠情况下的花费(放到Quote的vector中)" << v1[1].net_price(100) << std::endl;

	//std::vector<std::shared_ptr<Quote>> v2;
	//auto q2 = std::make_shared<Quote>("0-021", 25);
	//std::shared_ptr<Bulk_quote> bulk_shared = std::make_shared<Bulk_quote>(s1, 25, 40, 0.75);
	//v2.push_back(q2);
	//v2.push_back(bulk_shared);
	//std::cout << "Quote指针类不优惠情况下的花费" << v2[0]->net_price(100) << std::endl;
	//std::cout << "Bulk_quote指针类优惠情况下的花费(放到Quote的vector中)" << v2[1]->net_price(100) << std::endl;


	//print_total(bulk1, 50);

	//test 15.30
	Basket item;
	for (auto i = 0; i < 4; ++i)
		// 不少于 2 本打折
		item.add_item(Bulk_quote("978-7-121-15535-2", 100, 2, 0.2));
	for (auto i = 0; i < 6; ++i)
		// 不少于 5 本打折
		item.add_item(Bulk_quote("978-7-121-15535-1", 100, 5, 0.5));
	item.total_money(std::cout);
	return 0;

}