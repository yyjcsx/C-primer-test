#pragma once
#include "Bulk_quote.h"

class Bulk_quote_2 :
    public Bulk_quote
{
public:
    Bulk_quote_2(const std::string& Num, double initial_price, size_t n, double d1,size_t max_n) :Bulk_quote(Num,initial_price,n,d1),max_number(max_n) {};
    virtual double net_price(size_t real_number) const { 
        if (real_number < sales_number)
            return real_number * price;
        else if (real_number >= sales_number && real_number <= max_number)
            return real_number * discount * price;
        else if (real_number > max_number)
            
            return (real_number - max_number) * price + max_number * discount * price;
    }
    virtual void debug() const override {
        std::cout << "数据成员为" << "max_number" << std::endl;
    }
private:
    size_t max_number;
    
};

