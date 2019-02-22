/*************************************************************************
	> File Name: printf_format.c
	> Author: 
	> Mail: 
	> Created Time: Thu Feb 21 09:57:16 2019
 ************************************************************************/

#include <stdio.h>

int main(void) {
    double a = 1e-4;
    double b = 1e-5;
    float c = 1333333.12345678;
    float d = 133333.12345678;

    printf("%g\n", a);
    printf("%g\n", b);
    printf("%g\n", c); // The %e style is used if the exponent is less than -4 or greater than or equal to the precision.
    printf("%g\n", d); // default precision is 6
}
