/*************************************************************************
	> File Name: hello.c
	> Author: 
	> Mail: 
	> Created Time: Thu Jul 25 20:25:37 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>


/* Listing 11.32 -- converts command-line argument to number
 */
int main(int argc, char *argv[]) {
    int i, times;

    if (argc < 2 || (times = atoi(argv[1])) < 1)
    {
        printf("Usage: %s positive-number\n", argv[0]);
    }
    else
    {
        for (i = 0;i < times;i++)
        {
            puts("Hello, good looking!");
        }
    }

    return 0;
}
