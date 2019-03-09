/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Sat Mar  9 01:46:38 2019
 ************************************************************************/

#include <stdio.h>

/* Now modify the program of Programming Exercise 5 so that it computes the sum of the squares of the integers. (If you prefer, how much money you receive if you get $1 the first day, $4 the second day, $9 the third day, and so on. This looks like a much better deal!) C doesn’t have a squaring function, but you can use the fact that the square of n is n * n.
 */
int main(void) {
    int end;
    int sum = 0;

    scanf("%d", &end);
    for (int i = 1; i <= end; i++)
    {
        sum += i * i;
    }
    printf("The sum of the squares of the integers = %d\n", sum);
}
