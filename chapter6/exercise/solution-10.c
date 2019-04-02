/*************************************************************************
	> File Name: solution-10.c
	> Author: 
	> Mail: 
	> Created Time: Sat 30 Mar 2019 03:00:28 AM CST
 ************************************************************************/

#include<stdio.h>
/* Write a program that requests lower and upper integer limits, calculates the sum of all
the integer squares from the square of the lower limit to the square of the upper limit,
and displays the answer. The program should then continue to prompt for limits and
display answers until the user enters an upper limit that is equal to or less than the lower
limit. A sample run should look something like this:
 Enter lower and upper integer limits: 5 9
 The sums of the squares from 25 to 81 is 255
 Enter next set of limits: 3 25
 The sums of the squares from 9 to 625 is 5520
 Enter next set of limits: 5 5
 Done 
 */

int main(void) {
    int lower_limit, upper_limit;

    while (printf("Enter lower and upper integer limits: "), scanf("%d %d", &lower_limit, &upper_limit) == 2 && lower_limit < upper_limit)
    {
        long sum = 0;
        for (int i = lower_limit; i <= upper_limit; i++)
        {
            sum += (long) i * i;
        }
        printf("The sums of the squares from %ld to %ld is %ld\n", (long) lower_limit * lower_limit, (long) upper_limit * upper_limit, sum);
    }
    printf("Done\n");
}

