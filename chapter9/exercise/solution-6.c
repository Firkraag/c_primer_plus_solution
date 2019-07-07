/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul  7 17:16:22 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>




int main(void) {
    double x = 1.0, y = 2.0, z = 3.0;
    void replace(double *, double *, double *);
    printf("Before replacement, x = %f, y = %f, z = %f\n", x, y, z);
    replace(&x, &y, &z);
    printf("After replacement, x = %f, y = %f, z = %f\n", x, y, z);
    x = 1.0;
    y = 3.0;
    z = 2.0;
    printf("Before replacement, x = %f, y = %f, z = %f\n", x, y, z);
    replace(&x, &y, &z);
    printf("After replacement, x = %f, y = %f, z = %f\n", x, y, z);
    x = 3.0;
    y = 2.0;
    z = 1.0;
    printf("Before replacement, x = %f, y = %f, z = %f\n", x, y, z);
    replace(&x, &y, &z);
    printf("After replacement, x = %f, y = %f, z = %f\n", x, y, z);

    return 0;
}
/* Write and test a function that takes the addresses of three double variables as arguments and that moves the value of the smallest variable into the first variable, 
 * the middle value to the second variable, and the largest value into the third variable.
 */

void replace(double *xptr, double *yptr, double *zptr)
{
    double x = *xptr, y = *yptr, z = *zptr;
    
    if (x < y)
    {
        if (y < z)
        {
            ;
        }
        else if (x < z)
        {
            *zptr = y;
            *yptr = z;
        }
        else 
        {
            *xptr = z;
            *yptr = x;
            *zptr = y;
        }
    }
    else if (x < z)
    {
        *yptr = x;
        *xptr = y;
    }
    else if (y < z)
    {
        *zptr = x;
        *yptr = z;
        *xptr = y;
    }
    else 
    {
        *zptr = x;
        *xptr = z;
    }

}

