/*************************************************************************
	> File Name: solution-1.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul  7 16:43:19 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



int main(void) {
    double min(double, double);

    printf("The smaller number of %f and %f is %f\n", 1.0, 2.0, min(1.0, 2.0));
    printf("The smaller number of %f and %f is %f\n", 2.0, 2.0, min(2.0, 2.0));
    printf("The smaller number of %f and %f is %f\n", 2.0, 1.0, min(2.0, 1.0));

}
/* Devise a function called min(x,y) that returns the smaller of two double values. Test
the function with a simple driver.
*/
double min(double x, double y)
{
    return x < y ? x : y;
}
