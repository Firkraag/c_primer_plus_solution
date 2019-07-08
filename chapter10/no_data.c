/*************************************************************************
	> File Name: no_data.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul  8 20:08:07 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  SIZE 4


/* no_data.c -- uninitialized array */
int main(void) {
    int no_data[SIZE];
    int i;

    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0;i < SIZE;i++)
    {
        printf("%2d%14d\n", i, no_data[i]);
    }

    return 0;
}
