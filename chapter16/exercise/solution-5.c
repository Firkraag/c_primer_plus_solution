/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep 14 15:18:52 2019
 ************************************************************************/
/* Write a function that takes as arguments the name of an array of type int elements, 
 * the size of an array, and a value representing the number of picks. 
 * The function then should select the indicated number of items at random from the array and prints them. 
 * No array element is to be picked more than once. (This simulates picking lottery numbers or jury members.) 
 * Also, if your implementation has time() (discussed in Chapter 12) or a similar function available, 
 * use its output with srand() to initialize the rand() random-number generator. Write a simple program that tests the function.
 */
#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define SIZE 10

void pick_element(int ar[], size_t size, size_t pick_number);
int main(void) {
    int ar[SIZE] = {0, 1,2,3,4,5,6,7,8,9};
    size_t pick_number;
    while (printf("Please enter pick number, entering nonnumeric or pick number larger than array size %d will cause quitting\n", 10),\
            scanf("%zd", &pick_number) == 1 && pick_number <= SIZE)
    {
        pick_element(ar, SIZE, pick_number);
    } 
    return 0;
}

void pick_element(int ar[], size_t size, size_t pick_number)
{
    bool pick[size];
    size_t total_pick = 0;

    for (size_t i = 0;i < size;i++)
    {
        pick[i] = false; // not picked
    }
    srand(time(NULL));
    while (total_pick < pick_number)
    {
        size_t index = rand() % size;
        if (pick[index]) // already picked
        {
            continue;
        }
        pick[index] = true;
        total_pick++;
        printf("The %zdth picked element is the %zdth element of the array: %d\n", total_pick, index, ar[index]);
    }
}
