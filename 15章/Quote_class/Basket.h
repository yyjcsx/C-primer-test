#pragma once
#include"Quote.h"
#include<set>
class Basket
{
public:
	void add_item(const Quote& sale);
	void add_item(const Quote&& sale);
	double total_money(std::ostream& os);
private:
	static bool compare(const std::shared_ptr<Quote>& q1, const std::shared_ptr<Quote>& q2) {
		return (q1->isbn() > q2->isbn());
	}
	std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items{ compare };

};

