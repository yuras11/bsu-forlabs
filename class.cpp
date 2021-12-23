#include "class.h"
#include <cassert>
Fraction::Fraction(int numerator, int denominator)
{
    int copy_of_numerator = numerator;
    numerator /= abs(gcd(numerator, denominator));
    denominator /= abs(gcd(copy_of_numerator, denominator));
    if ((numerator > 0 && denominator < 0) || (numerator < 0 && denominator < 0))
    {
        numerator *= -1;
        denominator *= -1;
    }
    m_numerator = numerator;
    m_denominator = denominator;
    assert (denominator != 0);
}
Fraction::Fraction(const Fraction &copy)
{
    this->m_numerator = copy.m_numerator;
    this->m_denominator = copy.m_denominator;
}
Fraction Fraction::proper_Fraction(Fraction f)
{
    Fraction Drob(f.getNumerator(), f.getDenominator());
    int p = abs(gcd(Drob.getNumerator(), Drob.getDenominator()));
    Fraction Drob_1(Drob.getNumerator()/p, Drob.getDenominator()/p);
    Drob = Drob_1;
    return Drob;
}
int gcd (int a, int b)
{
    while (b)
    {
        a %= b;
        swap (a, b);
    }
    return a;
}
void Fraction::printFraction()
{
    Fraction f (m_numerator, m_denominator);
    f = f.proper_Fraction(f);
    std::cout << f.getNumerator() << "/" << f.getDenominator() << std::endl;
}
int Fraction::getNumerator()
{
    return m_numerator;
}
int Fraction::getDenominator()
{
    return m_denominator;
}
Fraction Fraction::getFraction(Fraction f)
{
    Fraction D(f.getNumerator(), f.getDenominator());
    return D;
}
Fraction Fraction::get_sum(Fraction f1, Fraction f2)
{
    f1 = f1.proper_Fraction(f1);
    f2 = f2.proper_Fraction(f2);
    int num = f1.getDenominator()*f2.getNumerator() + f2.getDenominator()*f1.getNumerator();
    int den = f1.getDenominator()*f2.getDenominator();
    Fraction Sum(num, den);
    Sum = Sum.proper_Fraction(Sum);
    return Sum;
}
Fraction Fraction::get_product(Fraction f1, Fraction f2)
{
    f1 = f1.proper_Fraction(f1);
    f2 = f2.proper_Fraction(f2);
    int num = f1.getNumerator()*f2.getNumerator();
    int den = f1.getDenominator()*f2.getDenominator();
    Fraction Product(num, den);
    Product = Product.proper_Fraction(Product);
    return Product;
}
Fraction Fraction::get_quotient(Fraction f1, Fraction f2)
{
    f1 = f1.proper_Fraction(f1);
    f2 = f2.proper_Fraction(f2);
    int num = f1.getNumerator()*f2.getDenominator();
    int den = f1.getDenominator()*f2.getNumerator();
    Fraction Quotient(num, den);
    Quotient = Quotient.proper_Fraction(Quotient);
    return Quotient;
}
void solution()
{
    Fraction fraction_1(7, -14);
    Fraction fraction_2(-9,-27);
    cout << "First fraction: " << endl;
    fraction_1.printFraction();
    cout << "Second fraction: " << endl;
    fraction_2.printFraction();
    Fraction sum = Fraction::get_sum(fraction_1, fraction_2);
    cout << "Their sum: " << endl;
    sum.printFraction();
    Fraction prod = Fraction::get_product(fraction_1, fraction_2);
    cout << "Their product: " << endl;
    prod.printFraction();
    Fraction quot = Fraction::get_quotient(fraction_1, fraction_2);
    cout << "Their quotient: " << endl;
    quot.printFraction();
}
