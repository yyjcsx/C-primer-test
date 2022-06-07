#pragma once
#include "Quote.h"
class Disc_quote :
    public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(const std::string& Num, double initial_price, size_t n, double d1) :Quote(Num, initial_price), sales_number(n), discount(d1) {};
    virtual double net_price(std::size_t)const = 0;
    Disc_quote(const Disc_quote&);
protected:
    size_t sales_number;
    double discount;

};

