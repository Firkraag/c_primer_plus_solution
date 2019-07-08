/*************************************************************************
	> File Name: day_mon1.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul  8 20:04:08 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  MONTHS 12


/* day_mon1.c -- prints the days for each month */
int main(void) {
    const int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (index = 0;index < MONTHS;index++)
    {
        printf("Month %d has %2d days.\n", index + 1, days[index]);
    }

    return 0;
}
