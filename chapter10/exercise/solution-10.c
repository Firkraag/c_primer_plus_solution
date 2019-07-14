/*************************************************************************
	> File Name: solution-10.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 14 17:07:11 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  SIZE 5
/* Write a function that sets each element in an array to the sum of the corresponding elements in two other arrays. 
 * That is, if array 1 has the values 2, 4, 5, and 8 and array 2 has the values 1, 0, 4, and 6, the function assigns array 3 the values 3, 4, 9, and 14. 
 * The function should take three array names and an array size as arguments. Test the function in a simple program.
 */
int main(void) {
    void array_sum_copy(int target[], const int source1[], const int source2[], int size);
    void print_array(int size, const int array[size]);
    int source1[SIZE] = {1,2,3,4,5};
    int source2[SIZE] = {6,7,8,9,10};
    int target[SIZE];

    printf("Before copy sum to target: \n");
    printf("array source1 = ");
    print_array(SIZE, source1);
    printf("\n");
    printf("array source2 = ");
    print_array(SIZE, source2);
    printf("\n");
    array_sum_copy(target, source1, source2, SIZE);
    printf("After copy sum to target: \n");
    printf("array target = ");
    print_array(SIZE, target);
    printf("\n");


}

void array_sum_copy(int target[], const int source1[], const int source2[], int size)
{
    for (int i = 0;i < size ;i++)
    {
        target[i] = source1[i] + source2[i];
    }
}

void print_array(int size, const int array[size])
{
    for (int i = 0; i < size;i++)
    {
        printf("%d ", array[i]);
    }
}


