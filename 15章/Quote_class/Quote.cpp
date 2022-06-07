#include "Quote.h"
Quote::Quote(const Quote& q) :bookNo(q.bookNo),price(q.price) {
	std::cout << "采用了Quote的拷贝构造函数" << std::endl;

}
