/*************************************************************************
	> File Name: day_mon2.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul  8 20:13:52 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>


/* day_mon2.c -- letting the compiler count elements */
int main(void) {
    const int days[] = {31,28,31,30,31,30,31,31,30,31};
    int index;

    for (index = 0;index < sizeof days / sizeof(days[0]);index++)
    {
        printf("Month %d has %2d days.\n", index + 1, days[index]);
    }

    return 0;
}
