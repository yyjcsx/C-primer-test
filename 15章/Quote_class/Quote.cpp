#include "Quote.h"
Quote::Quote(const Quote& q) :bookNo(q.bookNo),price(q.price) {
	std::cout << "������Quote�Ŀ������캯��" << std::endl;

}
