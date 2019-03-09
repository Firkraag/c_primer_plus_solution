/*************************************************************************
	> File Name: solution-7.c
	> Author: 
	> Mail: 
	> Created Time: Sat Mar  9 01:49:37 2019
 ************************************************************************/

#include <stdio.h>

/* Write a program that requests a type double number and prints the value of the number cubed. Use a function of your own design to cube the value and print it. The main() program should pass the entered value to this function.
*/
int main(void) {
    double cube(double), number;

    scanf("%lf", &number);
    printf("The cube of %lf is %lf\n", number, cube(number));

    return 0;
}

double cube(double number) {
    return number * number * number;
}
