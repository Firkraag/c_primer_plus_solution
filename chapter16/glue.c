/*************************************************************************
	> File Name: glue.c
	> Author: 
	> Mail: 
	> Created Time: Thu Sep 12 16:18:08 2019
 ************************************************************************/
/* Listing 16.4 -- use the ## operator
 */
/*#include <stdio.h>*/
/*#include <iso646.h>*/
#define XNAME(n) x ## n
#define PRINT_XN(n) printf("x" #n " = %d\n", x ## n);

int main(void) {
    int XNAME(1) = 14;
    int XNAME(2) = 20;
    int x3 = 30;
    PRINT_XN(1);
    PRINT_XN(2);
    PRINT_XN(3);
    return 0;
}
