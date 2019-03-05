/*************************************************************************
	> File Name: solution-3.c
	> Author: 
	> Mail: 
	> Created Time: Tue Mar  5 22:00:45 2019
 ************************************************************************/

#include <stdio.h>
/* Write a program that asks the user to enter the number of days and then converts that value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days. Display results in the following format:
18 days are 2 weeks, 4 days.
Use a while loop to allow the user to repeatedly enter day values; terminate the loop
when the user enters a nonpositive value, such as 0 or -20.
*/
int main(void) {
    int number_of_days;
    const int DAYS_PER_WEEK = 7;

    printf("Please enter the number of days:\n");
    scanf("%d", &number_of_days);

    while (number_of_days > 0)
    {
        printf("%d days are %d weeks, %d days.\n", number_of_days, number_of_days / DAYS_PER_WEEK, number_of_days % DAYS_PER_WEEK);
        printf("Please enter the number of days:\n");
        scanf("%d", &number_of_days);
    }
    printf("Done!\n");

    return 0;

}
