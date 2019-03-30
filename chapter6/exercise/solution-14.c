/*************************************************************************
	> File Name: solution-14.c
	> Author: 
	> Mail: 
	> Created Time: Sun 31 Mar 2019 12:30:11 AM CST
 ************************************************************************/

#include<stdio.h>
#define ARRAY_SIZE 8
/* Write a program that creates two eight-element arrays of doubles and uses a loop to let
the user enter values for the eight elements of the first array. Have the program set the
elements of the second array to the cumulative totals of the elements of the first array.
For example, the fourth element of the second array should equal the sum of the first
four elements of the first array, and the fifth element of the second array should equal
the sum of the first five elements of the first array. (It’s possible to do this with nested
loops,but by using the fact that the fifth element of the second array equals the fourth
element of the second array plus the fifth element of the first array, you can avoid
nesting and just use a single loop for this task.) Finally, use loops to display the contents
of the two arrays, with the first array displayed on one line and with each element of the
second array displayed below the corresponding element of the first array. 
*/

int main(void) {
    double first_array[ARRAY_SIZE], second_array[ARRAY_SIZE];
    double prev_value = 0;
    printf("Please enter eight double: \n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%lf", first_array + i);
    }
    for (int i = 0; i < ARRAY_SIZE; i++) {
        second_array[i] = first_array[i] + prev_value;
        prev_value = second_array[i];
    }
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%f\t", first_array[i]);
    }
    printf("\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%f\t", second_array[i]);
    }
    printf("\n");
}   




