/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul  7 17:13:04 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>




int main(void) {
    double larger_of(double, double);
    printf("The larger of %f and %f is %f\n", 1.0, 2.0, larger_of(1.0, 2.0));
    printf("The larger of %f and %f is %f\n", 3.0, 3.0, larger_of(3.0, 3.0));
    printf("The larger of %f and %f is %f\n", 5.0, 4.0, larger_of(5.0, 4.0));
}
/* Write and test a function called larger_of() that replaces the contents of two double variables with the maximum of the two values. 
 * For example, larger_of(x,y) would reset both x and y to the larger of the two.
 */

double larger_of(double x, double y)
{
    return x < y ? y : x;
}
