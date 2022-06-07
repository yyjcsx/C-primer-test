#include "Basket.h"
double print_total(const Quote& basic, size_t n);
double Basket::total_money(std::ostream& os) {
	double sum = 0.0;
	for (auto iter = items.cbegin(); iter != items.cend(); iter = items.upper_bound(*iter)){
		sum+=print_total(**iter,items.count(*iter));
	}
	std::cout << "Total money is" << sum << std::endl;
	return sum;
}

void Basket::add_item(const Quote& sale) {
	items.insert(std::shared_ptr<Quote>(sale.clone()));
}

void Basket::add_item(const Quote&& sale) {
	items.insert(std::shared_ptr<Quote>(std::move(sale).clone()));
}