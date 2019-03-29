/*************************************************************************
	> File Name: solution-9.c
	> Author: 
	> Mail: 
	> Created Time: Sat 30 Mar 2019 02:54:35 AM CST
 ************************************************************************/

#include<stdio.h>
/*Modify exercise 8 so that it uses a function to return the value of the calculation 
 */

int main() {
    double f1, f2, calculate(double, double);

    while (printf("Please enter two floating-pointer numbers(enter q to quit)"),scanf("%lf %lf", &f1, &f2) == 2)
    {
        printf("the value of %f - %f divided by %f * %f is %f", f1, f2, f1, f2, calculate(f1, f2));
    }
}

double calculate(double f1, double f2)
{
    return (f1 - f2) / (f1 * f2);
}
