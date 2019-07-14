/*************************************************************************
	> File Name: solution-7.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 13 17:58:27 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  COLS 3
#define  ROWS 3


/* Write a program that initializes a two-dimensional array-of-double and uses one of the copy functions from exercise 2 to copy it to a second two-dimensional array. 
 * (Because a two-dimensional array is an array of arrays, a one-dimensional copy function can be used with each subarray.)
 */
int main(void) {
    void copy_arr(double [], double [], int);
    double array1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    double array2[ROWS][COLS];
    
    for (int i = 0;i < ROWS;i++)
    {
        copy_arr(array2[i], array1[i], COLS);
    }

    printf("After copy, now the second array is:\n");
    for (int i = 0;i < ROWS; i++)
    {
        for (int j = 0;j < COLS;j++)
        {
            printf("%f ", array2[i][j]);
        }
        printf("\n");
    }

    
}
void copy_arr(double target[], double source[], int size)
{
    for (int i = 0; i< size; i++)
    {
        target[i] = source[i];
    }
}
