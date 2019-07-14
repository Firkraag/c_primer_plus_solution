/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 13 17:41:50 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <assert.h>
#define  SIZE 5


/* Write a function that returns the difference between the largest and smallest elements of an array-of-double. 
 * Test the function in a simple program.
 */
int main(void) {
    double difference(double [], int);
    void print_array(double [], int);
    double array[SIZE] = {1.0, 2.0, 4.0, 5.0, 3.0};

    printf("The array is: ");
    print_array(array, SIZE);
    printf("The difference between the largest and smallest elements of the array is %f\n", difference(array, SIZE));
}

double difference(double array[], int size)
{
    assert(size > 0);
    double max = array[0];
    double min = array[0];

    for (int i = 1;i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return max - min;
}

void print_array(double array[], int size)
{
    for (int i = 0;i < size;i++)
    {
        printf("%f ", array[i]);
    }
    printf("\n");
}
