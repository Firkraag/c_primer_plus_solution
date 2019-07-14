/*************************************************************************
	> File Name: solution-3.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 13 17:22:32 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <assert.h>


/* Write a function that returns the largest value stored in an array-of-int. 
 * Test the function in a simple program.
 */

int main(void) {
    int max(int [], int size);
    int array[10] = {7, 8, 4, 5, 3, 2, 0, 12, 0, 1};
    
    printf("The array is: ");
    for (int i = 0;i < 10;i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("The maximum of array is %d\n", max(array, 10));
}

int max(int array[], int size)
{
    assert(size > 0);
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
