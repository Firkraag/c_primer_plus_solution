/*************************************************************************
	> File Name: solution-3.c
	> Author: 
	> Mail: 
	> Created Time: Tue Sep 10 11:37:06 2019
 ************************************************************************/
/* Write a function that takes an int argument and returns the number of “on” bits in the argument. 
 * Test the function in a program.
 */
#include <stdio.h>
#include <iso646.h>
#include <limits.h>

int number_of_on_bits(int n);
int main(void) {
    int n;
    while (printf("Please enter an integer, enter non numeric to exit: \n"), scanf("%d", &n) == 1)
    {
        printf("The number of \"on\" bits in %d are %d\n", n, number_of_on_bits(n));
    } 
    return 0;
}

int number_of_on_bits(int n)
{
    int count = 0;
    for (int i = 0;i < sizeof(int) * CHAR_BIT;i++)
    {
        count += n & 01;
        n = n >> 1;
    }
    return count;
}
