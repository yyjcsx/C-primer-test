class Fraction {
    int m_num;    //����
    int m_den;  //��ĸ
public:
    explicit Fraction(int num, int den = 1) : m_num(num), m_den(den) { }
    operator double() const { return (double)(m_num / m_den); }//ת����const
    Fraction operator+(const Fraction& f) { return f; }
};
//Fraction f(3, 5);
//double d = 4 + f;//f�������operator double() ת��0.6������double��+

int main() {
    Fraction f(3, 5);
    //Fraction d = f + 4;//����non-explicit constructor��4ת��Fraction����operator+
    //// explicit Fraction(int num, int den=1)
    
    Fraction  d2 = f + 4;//���ܵ��ó�Ա��+����
    double d = 4 + f;
}
