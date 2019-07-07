/*************************************************************************
	> File Name: solution-11.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul  7 18:15:29 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <assert.h>




int main(void) {
    int Fibonacci(int);

    for (int i = 1; i <= 20; i++)
    {
        printf("Fibonacci(%d) = %d\n", i, Fibonacci(i));
    }

    return 0;
}
/* Write and test a Fibonacci() function that uses a loop instead of recursion to calculate Fibonacci numbers.
 */
int Fibonacci(int n)
{
    assert(n >= 1);
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else 
    {
        int a = 0, b = 1;
        for (int i = 3; i <= n; i++)
        {
            int tmp = b;
            b = a + b;
            a = tmp;
        }
        return b;
    }
}
