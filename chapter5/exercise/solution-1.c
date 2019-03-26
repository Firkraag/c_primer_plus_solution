/*************************************************************************
	> File Name: solution-1.c
	> Author: 
	> Mail: 
	> Created Time: Sat Mar  2 10:13:53 2019
 ************************************************************************/

#include <stdio.h>
/* Write a program that converts time in minutes to time in hours and minutes. Use #define or const to create a symbolic constant for 60. Use a while loop to allow the user to enter values repeatedly and terminate the loop if a value for the time of 0 or less is entered.
*/
#define MINUTE_PER_HOUR 60
int main(void) {
    int minutes;

    while (printf("Please enter minutes:\n"),scanf("%d", &minutes) > 0) {
        printf("hours = %d and minutes = %d\n", minutes / MINUTE_PER_HOUR, minutes % MINUTE_PER_HOUR);
    }
    printf("exit\n");
}
