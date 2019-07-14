/*************************************************************************
	> File Name: solution-14.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 14 18:07:20 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define ROWS 3
#define COLS 5

/* Do Programming Exercise 13, but use variable-length array function parameters.
 */

int main(void) {
    void get_numbers_into_array(int rows, int cols, double array[rows][cols]);
    double average_of_array_row(int row, int rows, int cols, double array[rows][cols]);
    double average_of_array(int rows, int cols, double array[rows][cols]);
    double max_of_array(int rows, int cols, double array[rows][cols]);
    void report(double array_row_average[], double array_average, double array_max, int rows);

    double array[ROWS][COLS];
    double array_row_average[ROWS];
    double array_average;
    double array_max;
    get_numbers_into_array(ROWS, COLS, array);
    for (int row = 0;row < ROWS ;row++)
    {
        array_row_average[row] = average_of_array_row(row, ROWS, COLS, array);
    }
    array_average = average_of_array(ROWS, COLS, array);
    array_max = max_of_array(ROWS, COLS, array);
    report(array_row_average, array_average, array_max, ROWS);

   return 0; 
}

void get_numbers_into_array(int rows, int cols, double array[rows][cols])
{
    printf("Please enter %d doubles:\n", cols * rows);
    for (int row = 0;row < rows ;row++)
    {
        for (int col = 0;col < cols ;col++)
        {
            scanf("%lf", &array[row][col]);
        }
    }
}
double average_of_array_row(int row, int rows, int cols, double array[rows][cols])
{
    double total = 0;
    for (int col = 0;col < cols;col++)
    {
        total += array[row][col];
    }
    return total / cols;
}
double average_of_array(int rows, int cols, double array[rows][cols])
{
    double total = 0;
    for (int row = 0;row < rows;row++)
    {
        for (int col = 0;col < cols;col++)
        {
            total += array[row][col];
        }
    }
    return total / (cols * rows);
}

double max_of_array(int rows, int cols, double array[rows][cols])
{
    double max = array[0][0];
    for (int row = 0;row < rows;row++)
    {
        for (int col = 0;col < cols;col++)
        {
            if (array[row][col] > max)
            {
                max = array[row][col];
            }
        }
    }
    return max;
}
void report(double array_row_average[], double array_average, double array_max, int rows)
{
    for (int row = 0; row < rows; row++)
    {
        printf("The avearge of %d row of array is %f\n", row + 1, array_row_average[row]);
    }
    printf("The average of all values of array is %f\n", array_average);
    printf("The maximum of all values of array is %f\n", array_max);
}
