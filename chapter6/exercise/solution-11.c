/*************************************************************************
	> File Name: solution-11.c
	> Author: 
	> Mail: 
	> Created Time: Sat 30 Mar 2019 03:18:21 AM CST
 ************************************************************************/

#include<stdio.h>
#define INTEGER_NUMBER 8
/* Write a program that reads eight integers into an array and then prints them in reverse
order. 
 */

int main(void) {
    int numbers[INTEGER_NUMBER];

    for (int i = 0; i < INTEGER_NUMBER; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = INTEGER_NUMBER; i > 0; i--)
    {
        printf("%d\t", numbers[i - 1]);
    }
    printf("\n");
}

