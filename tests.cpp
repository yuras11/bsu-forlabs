/*
* я до этого уже заливал репозиторий с тестами, но папка не залилась
* в дедлайн попал вроде, в этом профиле есть репозиторий, называется Google tests, там должны были быть тесты
* если что, там как раз и видно, когда я заливал :)
*/



#include "gtest/gtest.h"
#include "class.h"
TEST(testing_fraction, test1)
{
    Fraction fraction(7, 13);
    ASSERT_EQ(fraction.getNumerator(), 7);
    ASSERT_EQ(fraction.getDenominator(), 13);
}
TEST(testing_fraction, test2)
{
    Fraction fraction(2, 14);
    ASSERT_EQ(fraction.getNumerator(), 1);
    ASSERT_EQ(fraction.getDenominator(), 7);
}
TEST(testing_fraction, test3)
{
    Fraction fraction(-3, 6);
    ASSERT_EQ(fraction.getNumerator(), -1);
    ASSERT_EQ(fraction.getDenominator(), 2);
}
TEST(testing_fraction, test4)
{
    Fraction fraction(5, -20);
    ASSERT_EQ(fraction.getNumerator(), -1);
    ASSERT_EQ(fraction.getDenominator(), 4);
}
TEST(testing_fraction, test5)
{
    Fraction fraction(-16, -68);
    ASSERT_EQ(fraction.getNumerator(), 4);
    ASSERT_EQ(fraction.getDenominator(), 17);
}
TEST(testing_fraction, test6)
{
    int a = 143;
    int b = 221;
    ASSERT_EQ(gcd(a, b), 13);
}
TEST(testing_fraction, test7)
{
    Fraction fraction(1,2);
    Fraction fraction1(4, 8);
    Fraction fraction2 = fraction.get_sum(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), 1);
    ASSERT_EQ(fraction2.getDenominator(), 1);
}
TEST(testing_fraction, test8)
{
    Fraction fraction(3,-4);
    Fraction fraction1(7, 11);
    Fraction fraction2 = fraction.get_sum(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), -5);
    ASSERT_EQ(fraction2.getDenominator(), 44);
}
TEST(testing_fraction, test9)
{
    Fraction fraction(-1,-40);
    Fraction fraction1(3, -78);
    Fraction fraction2 = fraction.get_sum(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), -7);
    ASSERT_EQ(fraction2.getDenominator(), 520);
}
TEST(testing_fraction, test10)
{
    Fraction fraction(2, -9);
    Fraction fraction1(-8, 15);
    Fraction fraction2 = fraction.get_sum(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), -34);
    ASSERT_EQ(fraction2.getDenominator(), 45);
}
TEST(testing_fraction, test11)
{
    Fraction fraction(-1,-10);
    Fraction fraction1(-5, -14);
    Fraction fraction2 = fraction.get_sum(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), 16);
    ASSERT_EQ(fraction2.getDenominator(), 35);
}
TEST(testing_fraction, test12)
{
    Fraction fraction(7,36);
    Fraction fraction1(9, 19);
    Fraction fraction2 = fraction.get_product(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), 7);
    ASSERT_EQ(fraction2.getDenominator(), 76);
}
TEST(testing_fraction, test13)
{
    Fraction fraction(-6,16);
    Fraction fraction1(44, 27);
    Fraction fraction2 = fraction.get_product(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), -11);
    ASSERT_EQ(fraction2.getDenominator(), 18);
}
TEST(testing_fraction, test14)
{
    Fraction fraction(2, -9);
    Fraction fraction1(-8, 15);
    Fraction fraction2 = fraction.get_product(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), 16);
    ASSERT_EQ(fraction2.getDenominator(), 135);
}
TEST(testing_fraction, test15)
{
    Fraction fraction(-1,-40);
    Fraction fraction1(3, -78);
    Fraction fraction2 = fraction.get_product(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), -1);
    ASSERT_EQ(fraction2.getDenominator(), 1040);
}
TEST(testing_fraction, test16)
{
    Fraction fraction(-3,-10);
    Fraction fraction1(-5, -14);
    Fraction fraction2 = fraction.get_product(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), 3);
    ASSERT_EQ(fraction2.getDenominator(), 28);
}
TEST(testing_fraction, test17)
{
    Fraction fraction(7,36);
    Fraction fraction1(9, 19);
    Fraction fraction2 = fraction.get_quotient(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), 133);
    ASSERT_EQ(fraction2.getDenominator(), 324);
}
TEST(testing_fraction, test18)
{
    Fraction fraction(-6,16);
    Fraction fraction1(24, 48);
    Fraction fraction2 = fraction.get_quotient(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), -3);
    ASSERT_EQ(fraction2.getDenominator(), 4);
}
TEST(testing_fraction, test19)
{
    Fraction fraction(2, -9);
    Fraction fraction1(-8, 15);
    Fraction fraction2 = fraction.get_quotient(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), 5);
    ASSERT_EQ(fraction2.getDenominator(), 12);
}
TEST(testing_fraction, test20)
{
    Fraction fraction(-1,-40);
    Fraction fraction1(3, -78);
    Fraction fraction2 = fraction.get_quotient(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), -13);
    ASSERT_EQ(fraction2.getDenominator(), 20);
}
TEST(testing_fraction, test21)
{
    Fraction fraction(-3,-10);
    Fraction fraction1(-5, -14);
    Fraction fraction2 = fraction.get_quotient(fraction, fraction1);
    ASSERT_EQ(fraction2.getNumerator(), 21);
    ASSERT_EQ(fraction2.getDenominator(), 25);
}
