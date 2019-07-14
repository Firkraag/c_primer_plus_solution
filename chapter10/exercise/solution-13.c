/*************************************************************************
	> File Name: solution-13.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 14 17:39:06 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define ROWS 3
#define COLS 5

/* Write a program that prompts the user to enter three sets of five double numbers each. (You may assume the user responds correctly and doesn’t enter non-numeric data.) 
 * The program should accomplish all of the following:
 * a. Store the information in a 3×5 array.
 * b. Compute the average of each set of five values. 
 * c. Compute the average of all the values.
 * d. Determine the largest value of the 15 values.
 * e. Report the results.
 * Each major task should be handled by a separate function using the traditional C approach to handling arrays. 
 * Accomplish task “b” by using a function that computes and returns the average of a one-dimensional array; use a loop to call this function three times. 
 * The other tasks should take the entire array as an argument, and the functions performing tasks “c” and “d” should return the answer to the calling program.
 */
int main(void) {
    void get_numbers_into_array(double array[][COLS], int rows);
    double average_of_array_row(double array[][COLS], int row);
    double average_of_array(double array[][COLS], int rows);
    double max_of_array(double array[][COLS], int rows);
    void report(double array_row_average[], double array_average, double array_max, int rows);

    double array[ROWS][COLS];
    double array_row_average[ROWS];
    double array_average;
    double array_max;
    get_numbers_into_array(array, ROWS);
    for (int row = 0;row < ROWS ;row++)
    {
        array_row_average[row] = average_of_array_row(array, row);
    }
    array_average = average_of_array(array, ROWS);
    array_max = max_of_array(array, ROWS);
    report(array_row_average, array_average, array_max, ROWS);

   return 0; 
}

void get_numbers_into_array(double array[][COLS], int rows)
{
    printf("Please enter %d doubles:\n", COLS * rows);
    for (int row = 0;row < rows ;row++)
    {
        for (int col = 0;col < COLS ;col++)
        {
            scanf("%lf", &array[row][col]);
        }
    }
}
double average_of_array_row(double array[][COLS], int row)
{
    double total = 0;
    for (int col = 0;col < COLS;col++)
    {
        total += array[row][col];
    }
    return total / COLS;
}
double average_of_array(double array[][COLS], int rows)
{
    double total = 0;
    for (int row = 0;row < rows;row++)
    {
        for (int col = 0;col < COLS;col++)
        {
            total += array[row][col];
        }
    }
    return total / (COLS * rows);
}

double max_of_array(double array[][COLS], int rows)
{
    double max = array[0][0];
    for (int row = 0;row < rows;row++)
    {
        for (int col = 0;col < COLS;col++)
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
