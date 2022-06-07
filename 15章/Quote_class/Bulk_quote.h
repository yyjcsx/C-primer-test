#pragma once
#include "Quote.h"
#include"Disc_quote.h"
class Bulk_quote :
    public Disc_quote
{
public:
    
    //Bulk_quote(const std::string& Num, double initial_price, size_t n, double d1) :Quote(Num, initial_price), sales_number(n), discount(d1) {};
    //test 15.15
    //Bulk_quote(const std::string& Num, double initial_price, size_t n, double d1) :Disc_quote(Num, initial_price, n, d1) {};
    
    virtual double net_price(size_t real_number) const override { if (real_number < sales_number)return real_number * price; else return real_number * discount * price; }
    virtual void debug() const override {
        std::cout << "Bulk_quote的数据成员为" << "sales_number,discount";
    }
//15.16中继承的基类Disc_quote已经
//protected:
//    size_t sales_number ;
//    double discount ;
    

    //test 15.26
    Bulk_quote(const Bulk_quote& b);

    //test 15.27 继承构造函数
    using Disc_quote::Disc_quote;
    
};

