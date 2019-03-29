/*************************************************************************
	> File Name: solution-8.c
	> Author: 
	> Mail: 
	> Created Time: Sat 30 Mar 2019 02:48:40 AM CST
 ************************************************************************/

#include<stdio.h>
/* Write a program that requests two floating-point numbers and prints the value of their
difference divided by their product. Have the program loop through pairs of input values
until the user enters nonnumeric input.  
*/
int main() {
    double f1, f2;

    while (printf("Please enter two floating-pointer numbers(enter q to quit)"),scanf("%lf %lf", &f1, &f2) == 2)
    {
        printf("the value of %f - %f divided by %f * %f is %f", f1, f2, f1, f2, (f1 - f2) / (f1 * f2));
    }
}
