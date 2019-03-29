/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 30 Mar 2019 02:11:38 AM CST
 ************************************************************************/

#include<stdio.h>

/* Use nested loops to produce the following pattern:
 $
 $$
 $$$
 $$$$
 $$$$$ 
 */
int main(void) {
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");

    }

}
