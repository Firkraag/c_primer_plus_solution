/*************************************************************************
	> File Name: sum_arr2.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 12 07:33:41 2019
 ************************************************************************/
#include <stdio.h>
#include <iso646.h>
#define  SIZE 10

int sump(int *start, int *end);
// sum_arr2.c -- sums the elements of an array
int main(void) {
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);

    return 0;
}

int sump(int *start, int *end)
{
    int total = 0;
    
    while (start < end )
    {
        total += *start;
        start++;
    } 

    return total;
}
