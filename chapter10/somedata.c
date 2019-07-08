/*************************************************************************
	> File Name: somedata.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul  8 20:10:52 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  SIZE 4


/* some_data.c -- partially initialized array */
int main(void) {
    int some_data[SIZE] = {1492, 1066};
    int i;

    printf("%2s%14s\n", "i", "some_data[i]");
    for (i = 0;i < SIZE;i++)
    {
        printf("%2d%14d\n", i, some_data[i]);
    }

    return 0;
}
