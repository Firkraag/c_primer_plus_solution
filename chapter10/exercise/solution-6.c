/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 13 17:53:08 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <assert.h>
#define SIZE 5


/* Write a function that reverses the contents of an array of double and test it in a simple program.
 */
int main(void) {
    double array[SIZE] = {1.0, 2.0, 4.0, 5.0, 3.0};
    void reverse(double [], int);
    void print_array(double [], int);

    printf("The array is: ");
    print_array(array, SIZE);
    reverse(array, SIZE);

    printf("Now the array is: ");
    print_array(array, SIZE);
}

void reverse(double array[], int size)
{
    int low = 0, high = size - 1;
    
    while (low < high )
    {
        double tmp = array[low];
        array[low] = array[high];
        array[high] = tmp;
        low++;
        high--;
    } 
}
void print_array(double array[], int size)
{
    for (int i = 0;i < size;i++)
    {
        printf("%f ", array[i]);
    }
    printf("\n");
}
