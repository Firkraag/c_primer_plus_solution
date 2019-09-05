/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul 29 17:27:44 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define SIZE 10
#define TIMES 1000

/* Write a program that generates 1000 random numbers in the range 1–10. 
 * Don’t save or print the numbers, but do print how many times each number was produced. 
 * Have the program do this for 10 different seed values. Do the numbers appear in equal amounts? 
 * You can use the functions from this chapter or the ANSI C rand() and srand() functions, which follow the same format that our functions do. 
 * This is one way to examine the randomness of a particular random-number generator.
 */


int main(void) {
   int numbers[SIZE];
   int random_number(void);



   /* Iterates for 10 different seed values */
   for (int i = 0; i < 10;i++)
   {
       srand(time(NULL)); //use current time as seed for random generator
       for (int i = 0;i < SIZE;i++)
       {
           numbers[i] = 0;
       }
       /*sleep(1);*/
       for (int j = 0;j < TIMES;j++)
       {
           numbers[random_number() - 1]++;  
       }
       for (int j = 0;j < SIZE;j++)
       {
           printf("%d: %d times\t", j + 1, numbers[j]);
       }
       printf("\n");
       sleep(1);
   }

}


int random_number(void)
{   
    return rand() % SIZE + 1;
}

