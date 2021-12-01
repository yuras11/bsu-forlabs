#include "tests.h"
void test_1()
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int result = NumberOfSignChanges(array, 6);
    assert(result == 0);
}
void test_2()
{
    int array[6] = {1, 2, 0, 4, 0, 6};
    int result = NumberOfSignChanges(array, 6);
    assert(result == 0);
}
void test_3()
{
    int array[8] = {-1, 2, -3, 4, -5, 6};
    int result = NumberOfSignChanges(array, 8);
    assert(result == 5);
}
void test_4()
{
    int array[8] = {-2, 0, 8, 7, -2, -3, 8, -6};
    int result = NumberOfSignChanges(array, 8);
    assert(result == 4);
}
void test_5()
{
    int array[10] = {1, 2, 3, 4, 7, 8, 4, 6, 9, 3};
    int result = ProductOfElementsBetweenFirstAndSecondZero(array, 10);
    assert(result == 0);
}
void test_6()
{
    int array[7] = {1, 2, 3, 77, 0, 8, 4};
    int result = ProductOfElementsBetweenFirstAndSecondZero(array, 7);
    assert(result == 0);
}
void test_7()
{
    int array[7] = {1, 2, 0, 77, 0, 8, 4};
    int result = ProductOfElementsBetweenFirstAndSecondZero(array, 7);
    assert(result == 77);
}
void test_8()
{
    int array[7] = {5, 0, 8, 7, 2, 0, 4};
    int result = ProductOfElementsBetweenFirstAndSecondZero(array, 7);
    assert(result == 112);
}
void test_9()
{
    int array[7] = {0, 0, 8, 7, 2, 0, 4};
    int result = ProductOfElementsBetweenFirstAndSecondZero(array, 7);
    assert(result == 1);
}
void test_10()
{
    int array[11] = {1, 0, 8, 2, 3, 0, 8, 9, 0, 8, 9};
    int result = ProductOfElementsBetweenFirstAndSecondZero(array, 11);
    assert(result == 48);
}
void run_tests()
{
    test_1();
    test_2();
    test_3();
    test_4();
    test_5();
    test_6();
    test_7();
    test_8();
    test_9();
    test_10();
}
