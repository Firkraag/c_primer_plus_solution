/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul 29 16:21:20 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

int main(void) {
    int call_count(void);
    for (int i = 0;i < 10;i++)
    {
        printf("First loop, %dth iteration, %dth call\n", i + 1, call_count());
    }
    for (int i = 0;i < 10;i++)
    {
        printf("Second loop, %dth iteration, %dth call\n", i + 1, call_count());
    }

    return 0;
}

int call_count(void)
{
    static int count = 0;
    return ++count;
}
