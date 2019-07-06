/*************************************************************************
	> File Name: recur.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jun 21 16:49:14 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* recursion illustration */
int main(void) {
    void up_and_down(int);

    up_and_down(1);

    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4)
    {
        up_and_down(n + 1);
    }
    printf("Level %d: n location %p\n", n, &n);
}
