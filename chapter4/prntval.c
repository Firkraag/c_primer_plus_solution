/*************************************************************************
	> File Name: prntval.c
	> Author: 
	> Mail: 
	> Created Time: Thu Feb 21 14:22:59 2019
 ************************************************************************/

/* finding printf()'s return value */ 
#include <stdio.h>

int main(void) {
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printd %d characters.\n", rv);

    return 0;
}
