#pragma once
#include <iostream>
#include <numeric>
using namespace std;
class Fraction
{
private:
    int m_numerator;
    int m_denominator;
public:
    Fraction(int numerator,  int denominator);
    Fraction(const Fraction &copy);
    void check_denominator(Fraction f);
    void check_fraction_on_property(Fraction f);
    Fraction proper_Fraction(Fraction f);
    void printFraction();
    int getNumerator();
    int getDenominator();
    Fraction getFraction(Fraction f);
    static Fraction get_sum(Fraction f1, Fraction f2);
    static Fraction get_product(Fraction f1, Fraction f2);
    static Fraction get_quotient(Fraction f1, Fraction f2);
};
void solution();
