#include <cstddef>


struct Longdouble {
	Longdouble(double = 0.0);
	operator double();
	operator float();
	//用于演示的成员operator+;在通常情况下是个非成员
	Longdouble operator+(const SmallInt&);
	//其他成员与14.9.2节一致
};
Longdouble operator+(Longdouble&, double);






class SmallInt
{
	friend SmallInt operator+(const SmallInt& si1, const SmallInt& si2) { SmallInt si_sum(si1.val + si2.val); return si_sum; }
public:
	SmallInt(int i = 0) : val(i) {}
	operator int() const { return val; }
private:
	std::size_t val;
};

int main()
{
	SmallInt s1;
	Longdouble ld;
	ld = s1 + ld;
	//double d = s1 + 3.14;
	//double d1 = s1 + SmallInt(3.14);
	//double d2 = s1.operator int() + 3.14;

	return 0;
}
