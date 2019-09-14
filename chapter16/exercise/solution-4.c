/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep 14 14:59:46 2019
 ************************************************************************/
/* 
 */
#include <stdio.h>
#include <iso646.h>
#include <time.h>
#include <unistd.h>
void wait_until_timeout(double delay_seconds);
int main(void) {
    double delayed_seconds;
    while (printf("Please enter the desired time delay, nonnumeric to quit:\n"), scanf("%lf", &delayed_seconds) == 1)
    {
        wait_until_timeout(delayed_seconds);
    } 
    return 0;
}

void wait_until_timeout(double delayed_seconds)
{
    clock_t begin = clock();
    while(((double) (clock() - begin) / CLOCKS_PER_SEC) < delayed_seconds)
    {
        ;
    }
}
