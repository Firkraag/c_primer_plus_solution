/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Tue Sep 10 11:44:35 2019
 ************************************************************************/
/* Write a function that takes two int arguments: a value and a bit position. 
 * Have the function return 1 if that particular bit position is 1, and have it return 0 otherwise. 
 * Test the function in a program.
 */
#include <stdio.h>
#include <iso646.h>
#include <stdbool.h>
bool bit_position_on(int n, unsigned pos);
int main(void) {
    int n;
    unsigned pos;
    while (printf("Please enter an value and a bit position, enter non numeric to exit: \n"), scanf("%d %u", &n, &pos) == 2)
    {
        printf("The %uth bit of %d is %s\n", pos, n, bit_position_on(n, pos) ? "on" : "off");
    }
    return 0;
}

bool bit_position_on(int n, unsigned int pos)
{
    int mask = 1;
    if (pos > 0)
    {
        mask = mask << pos;
    }
    return (n & mask) >> pos;
}
