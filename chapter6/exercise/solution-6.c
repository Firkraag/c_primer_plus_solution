/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Sat 30 Mar 2019 02:39:14 AM CST
 ************************************************************************/

#include<stdio.h>
/* Write a program that prints a table with each line giving an integer, its square, and its
cube. Ask the user to input the lower and upper limits for the table. Use a for loop.
*/

int main(void) {
    int lower_limit, upper_limit;

    printf("Please enter lower limit: ");
    scanf("%d", &lower_limit);
    printf("Please enter upper limit: ");
    scanf("%d", &upper_limit);

    for (int i = lower_limit; i <= upper_limit;i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }
}

