/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul  7 17:06:01 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>




int main(void) {
    double x, y;
    double harmonic_mean(double, double);
    printf("Please enter two double values: ");
    scanf("%lf %lf", &x, &y);
    printf("The harmonic mean of %f and %f is %f\n", x, y, harmonic_mean(x, y));
}
/* The harmonic mean of two numbers is obtained by taking the inverses of the two numbers, averaging them, and taking the inverse of the result. 
 * Write a function that takes two double arguments and returns the harmonic mean of the two numbers.
 */

double harmonic_mean(double x, double y)
{
    return 2 * x * y / (x + y);
}
