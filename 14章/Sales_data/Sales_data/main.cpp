#include "Sales_data.h"

int main() {
    Sales_data b1("978-7-121-15535-2", 1, 97.9);
    Sales_data b2("978-7-121-15535-2", 1, 99.9);

    b1 += b2;
    std::cout << b1 << std::endl;
    std::cout << b1 + b2 << std::endl;

    return 0;
}
