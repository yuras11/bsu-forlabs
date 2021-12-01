#include "functions.h"
int NumberOfSignChanges(const int* array, int size1)
{
    int sign_changes = 0;
    for (int i = 0; i < size1 - 1; i++)
    {
        if (array[i] >= 0 && array[i+1] < 0)
        {
            sign_changes++;
        }
        if (array[i] < 0 && array[i+1] >= 0)
        {
            sign_changes++;
        }
    }
    return sign_changes;
}
int ProductOfElementsBetweenFirstAndSecondZero(const int* array, int size1)
{
    int first_null = size1 + 1;
    for (int i = 0; i < size1; i++)
    {
        if(array[i] == 0)
        {
            first_null = i;
            break;
        }
    }
    int second_null = size1 + 2;
    if (first_null != size1 + 1)
    {
        for (int j = first_null + 1; j < size1; j++)
        {
            if(array[j] == 0)
            {
                second_null = j;
                break;
            }
        }
    }
    int third_null = size1 + 3;
    for (int m = size1 - 1; m >= 0; m--)
    {
        if(array[m] == 0)
        {
            third_null = m;
            break;
        }
    }
    int product = 1;
    if (first_null == third_null)
    {
        return 0;
    }
    if(first_null + third_null == 2*size1 + 4)
    {
        return 0;
    }
    if(first_null != third_null && first_null + third_null != 2*size1 + 4)
    {
        for (int k = first_null + 1; k < second_null; k++)
        {
            product *= array[k];
        }
        return product;
    }
}
