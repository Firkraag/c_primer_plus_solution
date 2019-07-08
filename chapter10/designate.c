/*************************************************************************
	> File Name: designate.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jun 25 20:30:39 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define MONTHS 12
/* use designated initializers
 */
int main(void) {
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;

    for (i = 0; i < MONTHS; i++)
    {
        printf("%2d %d\n", i + 1, days[i]);
    }
    return 0;
}
