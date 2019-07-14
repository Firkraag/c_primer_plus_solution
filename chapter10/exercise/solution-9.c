/*************************************************************************
	> File Name: solution-9.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 13 18:12:05 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  ROWS 3
#define  COLS 5
/* Write a program that initializes a two-dimensional 3×5 array-of-double and uses a VLA-based function to copy it to a second two-dimensional array. 
 * Also provide a VLA-based function to display the contents of the two arrays. 
 * The two functions should be capable, in general, of processing arbitrary N×M arrays. 
 * (If you don’t have access to a VLA-capable compiler, use the traditional C approach of functions that can process an N×5 array).
 */
int main(void) {
    double array1[ROWS][COLS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
    };
    double array2[ROWS][COLS]; 
    void print_array(int row, int col, double array[row][col]);
    void copy_array(int row, int col, double target[row][col], double source[row][col]);

    copy_array(ROWS, COLS, array2, array1);
    print_array(ROWS, COLS, array1);
    
}

void print_array(int row, int col, double array[row][col])
{
    for (int i = 0; i < row;i++)
    {
        for (int j = 0;j < col;j++)
        {
            printf("%f ", array[i][j]);
        }
        printf("\n");
    }
}

void copy_array(int row, int col, double target[row][col], double source[row][col])
{
    for (int i = 0; i < row;i++)
    {
        for (int j = 0;j < col;j++)
        {
            target[i][j] = source[i][j];
        }
    }
}
