/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul 29 17:10:57 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

/* Write a program that generates a list of 100 random numbers in the range 1–10 in sorted decreasing order. 
 * (You can adapt the sorting algorithm from Chapter 11, “Character Strings and String Functions,” to type int. In this case, just sort the numbers themselves.)
 */
int main(void) {
   int numbers[SIZE];
   int random_number(void);
   int comp(const void *, const void *);

   srand(time(0)); //use current time as seed for random generator

   for (int i = 0;i < 100;i++)
   {
       numbers[i] = random_number();
   }
   qsort((void *) numbers, 100, sizeof(int), comp);
   for (int i = 0;i < 100;i++)
   {
       printf("%d\n", numbers[i]);
   }


}

int comp(const void *ptr1, const void *ptr2)
{
    int number1 = *((const int *) ptr1);
    int number2 = *((const int *) ptr2);

    return number1 - number2;
}

int random_number(void)
{   
    return rand() % 10 + 1;
}

