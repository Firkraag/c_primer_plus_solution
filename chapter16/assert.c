/*************************************************************************
	> File Name: assert.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep 14 10:41:49 2019
 ************************************************************************/
/* Listing 16.18 -- use assert()
 */
/*#define NDEBUG*/
#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
int main(void) {
    double x, y, z;

    puts("Enter a pair of numbers (0 0 to quit): ");
    while (scanf("%lf%lf", &x, &y) == 2 and (x != 0 || y != 0))
    {
        z = x * x - y * y;
        assert(z >= 0);
        printf("answer is %f\n", sqrt(z));
        puts("Next pair of number: ");
    } 
    puts("Done");
    return 0;
}
