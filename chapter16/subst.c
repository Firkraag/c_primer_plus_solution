/*************************************************************************
	> File Name: subst.c
	> Author: 
	> Mail: 
	> Created Time: Thu Sep 12 16:12:10 2019
 ************************************************************************/
/* Listing 16.3 -- substitue in string
 */
#include <stdio.h>
#include <iso646.h>
#define PSQR(x) printf("The square of " #x " is %d.\n", ((x) * (x)));

int main(void) {
    int y = 5;

    PSQR(y);
    PSQR(2 + 4);

    return 0;
}
