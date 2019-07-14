/*************************************************************************
	> File Name: solution-8.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 13 18:06:13 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>




/* Use a copy function from Programming Exercise 2 to copy the third through fifth elements of a seven-element array into a three-element array. 
 * The function itself need not be altered; just choose the right actual arguments. 
 * (The actual arguments need not be an array name and array size. 
 * They only have to be the address of an array element and a number of elements to be processed.)
 */
int main(void) {
    void copy_arr(int [], int [], int);
    void print_array(int [], int);
    int array1[7] = {7, 6, 5, 4, 3, 2, 1};
    int array2[3];

    copy_arr(array2, array1 + 2, 3);
    printf("After copy, now the second array is: ");
    print_array(array2, 3);

    return 0;
}
void copy_arr(int target[], int source[], int size)
{
    for (int i = 0; i< size; i++)
    {
        target[i] = source[i];
    }
}
void print_array(int array[], int size)
{
    for (int i = 0;i < size;i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
