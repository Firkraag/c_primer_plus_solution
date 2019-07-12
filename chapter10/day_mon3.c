/*************************************************************************
	> File Name: day_mon3.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul  9 20:57:06 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  MONTHS 12


/* day_mon3.c --- uses pointer notation */
int main(void) {
    const int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31, 30, 31};
    int index;

    for (index = 0;index < MONTHS;index++)
    {
        printf("Month %d has %2d days.\n", index + 1, *(days + index));
    }

    return 0;
}
