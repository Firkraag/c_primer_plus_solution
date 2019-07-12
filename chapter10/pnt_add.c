/*************************************************************************
	> File Name: pnt_add.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul  9 20:47:36 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  SIZE 4
int main(void) {
    short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;

    pti = dates;
    ptf = bills;
    printf("%23s %15s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
    {
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    }

    return 0;
}
