class Fraction {
    int m_num;    //分子
    int m_den;  //分母
public:
    explicit Fraction(int num, int den = 1) : m_num(num), m_den(den) { }
    operator double() const { return (double)(m_num / m_den); }//转出，const
    Fraction operator+(const Fraction& f) { return f; }
};
//Fraction f(3, 5);
//double d = 4 + f;//f对象调用operator double() 转成0.6，调用double的+

int main() {
    Fraction f(3, 5);
    //Fraction d = f + 4;//调用non-explicit constructor将4转成Fraction，再operator+
    //// explicit Fraction(int num, int den=1)
    
    Fraction  d2 = f + 4;//不能调用成员版+操作
    double d = 4 + f;
}
