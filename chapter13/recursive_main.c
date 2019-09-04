/*************************************************************************
	> File Name: recursive_main.c
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Sep 2019 10:00:01 AM CST
 ************************************************************************/

#include <stdio.h>
int main(void) {
    static int count = 10;
    if (count == 0)
    {
        return 0;
    }
    else
    {
        printf("count = %d\n", count--);
        main();
    }
    return 0;
}
