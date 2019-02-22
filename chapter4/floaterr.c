/*************************************************************************
	> File Name: floaterr.c
	> Author: 
	> Mail: 
	> Created Time: Wed Feb 20 11:42:31 2019
 ************************************************************************/

#include<stdio.h>

int main(void) {
    float a, b;

    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);

    return 0;
}
