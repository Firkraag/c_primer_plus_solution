/*************************************************************************
	> File Name: solution-11.c
	> Author: 
	> Mail: 
	> Created Time: Mon Sep  9 16:35:58 2019
 ************************************************************************/
/* Write a function called transform() that takes four arguments: 
 * the name of a source array containing type double data, 
 * the name of a target array of type double, 
 * an int representing the number of array elements, 
 * and the name of a function (or, equivalently, a pointer to a function). 
 * The transform() function should apply the indicated function to each element in the source array, placing the return value in the target array. 
 * For example, the call 
 *      transform(source, target, 100, sin); 
 * would set target[0] to sin(source[0]), and so on, for 100 elements. 
 * Test the function in a program that calls transform() four times, 
 * using two functions from the math.h library and two suitable functions of your own devising as arguments to successive calls of the transform() function.
 */

#include <stdio.h>
#include <iso646.h>
#include <math.h>
#define SIZE 10
typedef double (*DOUBLE_FP_DOUBLE)(double);
double triple(double);
double half(double);
void transform(double *, double *, int n, DOUBLE_FP_DOUBLE);
void print_array(double *, int);

int main(void) {
    double source[SIZE];
    double target[SIZE];
    for (int i = 0;i < SIZE ;i++)
    {
        source[i] = i;
    }
    printf("The source array content is:\n");
    print_array(source, SIZE);
    transform(source, target, SIZE, triple);
    printf("After applying triple, the target array content is:\n");
    print_array(target, SIZE);
    transform(source, target, SIZE, half);
    printf("After applying half, the target array content is:\n");
    print_array(target, SIZE);
    transform(source, target, SIZE, sin);
    printf("After applying sin, the target array content is:\n");
    print_array(target, SIZE);
    transform(source, target, SIZE, cos);
    printf("After applying cos, the target array content is:\n");
    print_array(target, SIZE);

    return 0;
}

void print_array(double array[], int n)
{
    for (int i = 0;i < n ;i++)
    {
        printf("%f\n", array[i]);
    }
}

double triple(double x)
{
    return x * 3;
}
double half(double x)
{
    return x / 2;
}
void transform(double source[], double target[], int n, DOUBLE_FP_DOUBLE func_ptr)
{
    for (int i = 0;i < n ;i++)
    {
        target[i] = func_ptr(source[i]);
    }
}
