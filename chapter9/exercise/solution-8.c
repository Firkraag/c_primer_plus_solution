/*************************************************************************
	> File Name: solution-8.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul  7 17:46:08 2019
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
    return 0;
}
/* Chapter 6, “C Control Statements: Looping,” (Listing 6.20) shows a power() function that returned the result of raising a type double number to a positive integer value. 
 * Improve the function so that it correctly handles negative powers. 
 * Also, build into the function that 0 to any power other than 0 is 0 and that any number to the 0 power is 1. 
 * (It should report that 0 to the 0 is undefined, then say it’s using a value of 1.) 
 * Use a loop. Test the function in a program.
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
    assert(p > 0);

    double pow = 1; 
    int i;
    for (i = 1; i <= p; i++) 
        pow *= n;
    return pow;
}

