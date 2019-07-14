/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 13 17:37:17 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <assert.h>
#define  SIZE 5

/*  Write a function that returns the index of the largest value stored in an array-of-double. 
 *  Test the function in a simple program.
 */
int main(void) {
    int max_element_index(double [], int size);
    double array[SIZE] = {1.0, 2.0, 5.0, 2.0, 3.0}; 
    printf("The array is: ");
    for (int i = 0;i < SIZE;i++)
    {
        printf("%f ", array[i]);
    }
    printf("\n");
    printf("The index of the largest value of the array is %d\n", max_element_index(array, SIZE));
}

int max_element_index(double array[], int size)
{
    assert(size > 0);
    double max = array[0];
    int max_index = 0;
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            max_index = i;
        }
    }
    return max_index;
}
