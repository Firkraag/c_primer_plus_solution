/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Mon Sep 16 14:17:03 2019
 ************************************************************************/
/* Write a function that takes three arguments: the name of an array of sorted integers, the number of elements of the array, and an integer to seek. 
 * The function returns the value 1 if the integer is in the array, and 0 if it isn’t. Have the function use the binary search technique.
 */
#include <stdio.h>
#include <iso646.h>
#define SIZE 10
int binary_search(int ar[], int n, int target);
int main(void) {
    int ar[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num;
    printf("The array is: ");
    for (int i = 0;i < SIZE ;i++)
    {
        printf("%d   ", ar[i]);
    }
    printf("\n");
    while (printf("Please enter a integer to seek:\n"), scanf("%d", &num) == 1)
    {
        if (binary_search(ar, SIZE, num))
        {
            printf("%d found in array\n", num);
        }
        else
        {
            printf("%d not found in array\n", num);
        }
    } 
    return 0;
}

int binary_search(int ar[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (ar[mid] < target)
        {
            low = mid + 1;
        }
        else if (ar[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
