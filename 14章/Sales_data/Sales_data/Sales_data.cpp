#include "Sales_data.h"

Sales_data::Sales_data(std::istream& is) : Sales_data() {
    is >> *this;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs) {
    *this = (*this) + rhs;
    return *this;
}

std::istream& operator>>(std::istream& is, Sales_data& item) {
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    if (is)
        item.revenue = price * item.units_sold;
    else
        item = Sales_data();
    return is;
}

std::ostream& operator<<(std::ostream& os, const Sales_data& item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue
        << " " << item.avg_price();
    return os;
}

Sales_data operator+(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.units_sold += rhs.units_sold;       // �����������͵ķ��ϸ�ֵ�����
    sum.revenue += rhs.revenue;             // �����������͵ķ��ϸ�ֵ�����
    return sum;
}
