#include"Quote.h"
#include<iostream>
using namespace std;
double print_total(const Quote& basic, size_t n) {
	cout << "this book's money is " << basic.net_price(n) << endl;
	cout << "the book no is" << basic.isbn() << endl;
	return basic.net_price(n);
}