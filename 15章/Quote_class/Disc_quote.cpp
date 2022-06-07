#include "Disc_quote.h"
Disc_quote::Disc_quote(const Disc_quote& d):sales_number(d.sales_number),discount(d.discount) {

	std::cout << "使用Disc_quote的拷贝构造函数" << std::endl;
}