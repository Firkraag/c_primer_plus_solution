/*************************************************************************
	> File Name: cmpflt.c
	> Author: 
	> Mail: 
	> Created Time: Thu Mar 28 20:21:39 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void) {
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    while (scanf("%lf", &response),fabs(response - ANSWER) > 0.0001)
    {
        printf("Try again!\n");
    }
    printf("Close enough!\n");

    return 0;
}
