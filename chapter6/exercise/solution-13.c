/*************************************************************************
	> File Name: solution-13.c
	> Author: 
	> Mail: 
	> Created Time: Sun 31 Mar 2019 12:21:04 AM CST
 ************************************************************************/

#include<stdio.h>
#include <math.h>

#define ARRAY_SIZE 8
/*Write a program that creates an eight-element array of ints and sets the elements to the
first eight powers of 2 and then prints the values. Use a for loop to set the values, and,
for variety, use a do while loop to display the values.  
*/

int main(void) {
    int numbers[ARRAY_SIZE];
    int value = 1;
    int i;
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = value;
        value *= 2;
    }
    i = 0;
    do {
        printf("%d\t", numbers[i]);
    } while (++i < ARRAY_SIZE);
}

