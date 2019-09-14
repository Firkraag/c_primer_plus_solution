/*************************************************************************
	> File Name: mac_arg.c
	> Author: 
	> Mail: 
	> Created Time: Thu Sep 12 15:57:18 2019
 ************************************************************************/
/* LIsting 16.2 -- macros with arguments 
 */
#include <stdio.h>
#include <iso646.h>
#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n",X)

int main(void) {
    int x = 5;
    int z;

    printf("x = %d\n", x);
    z = SQUARE(x);
    printf("Evaluating SQUARE(x): ");
    PR(z);
    z = SQUARE(2);
    printf("Evaluating SQUARE(2): ");
    PR(z);
    printf("Evaluating SQUARE(x + 2): ");
    PR(x + 2);
    printf("Evaluating 100/SQUARE(2): ");
    PR(100/SQUARE(2));
    printf("x is %d.\n", x);
    printf("Evaluating SQUARE(++x): ");
    PR(SQUARE(++x));
    printf("After incrementing, x is %x.\n", x);

    return 0;
}
