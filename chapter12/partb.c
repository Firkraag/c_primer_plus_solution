/*************************************************************************
	> File Name: partb.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Jul 2019 01:58:31 AM CST
 ************************************************************************/
/* Listing 12.6 -- rest of the program
 */
#include <stdio.h>
extern int count;
static int total = 0;
void accumulate(int k);
extern void report_count(void);
void accumulate(int k)
{
    static int subtotal = 0;
    if (k <= 0)
    {
        printf("loop cycle: %d\n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    }
    else 
    {
        subtotal += k; 
        total += k;
    }
    report_count();
}
