/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 13 17:08:58 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* Write a program that initializes an array-of-double and then copies the contents of the array into three other arrays. 
 * (All four arrays should be declared in the main program.) To make the first copy, use a function with array notation. 
 * To make the second copy, use a function with pointer notation and pointer incrementing. 
 * Have the first two functions take as arguments the name of the target array, the name of the source array, and the number of elements to be copied. 
 * Have the third function take as arguments the name of the target, the name of the source, and a pointer to the element following the last element of the source. 
 * That is, the function calls would look like this, given the following declarations:
 * double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5}; 
 * double target1[5];
 * double target2[5];
 * double target3[5];
 * copy_arr(target1, source, 5); 
 * copy_ptr(target2, source, 5);
 * copy_ptrs(target3, source, source + 5);
 */
int main(void) {
    void copy_arr(double [], double [], int);
    void copy_ptr(double *, double *, int);
    void copy_ptrs(double *, double *, double *);
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5}; 
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5); 
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%f\t", target1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%f\t", target2[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%f\t", target3[i]);
    }
    printf("\n");

    return 0;
}

void copy_arr(double target[], double source[], int size)
{
    for (int i = 0; i< size; i++)
    {
        target[i] = source[i];
    }
}

void copy_ptr(double *target, double *source, int size)
{
    for (int i = 0; i< size; i++)
    {
        *(target + i) = *(source + i);
    }
}

void copy_ptrs(double *target, double *source_start, double *source_end)
{
    while (source_start < source_end )
    {

        *target++ = *source_start++;
    } 
}
