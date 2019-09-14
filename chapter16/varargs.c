/*************************************************************************
	> File Name: varargs.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep 14 11:26:35 2019
 ************************************************************************/
/* Listing 16.21 -- use variable number of arguments
 */
#include <stdio.h>
#include <iso646.h>
#include <stdarg.h>
double sum(int, ...);
int main(void) {
    double s, t;

    s = sum(3, 1.1, 2.5, 13.3);
    t = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);
    printf("return value for "
            "sum(3, 1.1, 2.5, 13.3):            %g\n", s);
    printf("return value for "
            "sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1):            %g\n", t);
    return 0;
}

double sum(int lim, ...)
{
    va_list ap;
    double tot = 0;
    int i;

    va_start(ap, lim);
    for (int i = 0;i < lim ;i++)
    {
        tot += va_arg(ap, double);
    }
    va_end(ap);
    return tot;
}
