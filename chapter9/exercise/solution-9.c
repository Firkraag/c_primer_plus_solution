/*************************************************************************
	> File Name: solution-9.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul  7 18:03:08 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <assert.h>



int main(void) {
    double power(double, int);
    printf("%f to power %d is %f\n", 0.0, 0, power(0.0, 0));
    printf("%f to power %d is %f\n", 0.0, 1, power(0.0, 1));
    printf("%f to power %d is %f\n", 2.0, 0, power(2.0, 0));
    printf("%f to power %d is %f\n", 3.0, 2, power(3.0, 2));
    printf("%f to power %d is %f\n", 3.0, -2, power(3.0, -2));
    printf("%f to power %d is %f\n", -3.0, -3, power(-3.0, -3));
    return 0;
}
/* Redo Programming Exercise 8, but this time use a recursive function.
 */
double power(double n, int p)
{
    double _power(double, int);
    if (n == 0)
    {
        if (p == 0)
        {
            printf("0 to power 0 is undefined, and it's using a value of 1.\n");
            return 1;
        }
        else
        {
            printf("0 to any power other than 0 is 0\n");
            return 0;
        }
    }
    else if (p == 0)
    {
        printf("any number to the 0 power is 1\n");
        return 1;
    }
    else if (p > 0)
    {
        return _power(n, p);
    }
    else 
    {
        return 1 / _power(n, -p);
    }
} 

double _power(double n, int p)
{
    assert(p >= 0);
    assert(n != 0);
    if (p == 0)
    {
        return 1;
    }

    return n * _power(n, p - 1);
}


