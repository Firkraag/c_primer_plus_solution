/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep 14 12:40:36 2019
 ************************************************************************/
/* The harmonic mean of two numbers is obtained by taking the inverses of the two numbers, 
 * averaging them, and taking the inverse of the result. 
 * Use a #define directive to define a macro “function” that performs this operation. 
 * Write a simple program that tests the macro.
 */
#include <stdio.h>
#include <iso646.h>
#define HARMONIC_MEAN(X, Y) (2 * (X) * (Y) / ((X) + (Y)))

int main(void) {
    double num1, num2;
    while (printf("Please enter two number, enter nonnumeric to quit: "),scanf("%lf %lf", &num1, &num2) == 2)
    {
        printf("The harmonic mean of %f and %f is %f\n", num1, num2, HARMONIC_MEAN(num1, num2));
    } 

    return 0;
}
