/*************************************************************************
	> File Name: solution-11.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 14 17:17:04 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define ROWS 3
#define COLS 5
/* Write a program that declares a 3×5 array of int and initializes it to some values of your choice. 
 * Have the program print the values, double all the values, and then display the new values. 
 * Write a function to do the displaying and a second function to do the doubling. 
 * Have the functions take the array name and the number of rows as arguments.
 */
int main(void) {
    void display_array(const int array[][COLS], int rows);
    void double_array(int array[][COLS], int rows);
    int array[ROWS][COLS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
    };
    printf("Before doubling, the array is: \n");
    display_array(array, ROWS);
    printf("\n");
    double_array(array, ROWS);
    printf("After doubling, the array is: \n");
    display_array(array, ROWS);

    return 0;
}

void display_array(const int array[][COLS], int rows)
{
    for (int i = 0;i < rows;i++)
    {
        for (int j = 0;j < COLS;j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
void double_array(int array[][COLS], int rows)
{
    for (int i = 0;i < rows;i++)
    {
        for (int j = 0;j < COLS;j++)
        {
            array[i][j] *= 2;
        }
    }
}
