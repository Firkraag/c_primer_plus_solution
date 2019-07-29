/*************************************************************************
	> File Name: solution-7.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul 29 17:48:25 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "diceroll.h"
/* Write a program that behaves like the modification of Listing 12.13, which we discussed after showing the output of Listing 12.13. 
 * That is, have the program produce output like the following:
 * Enter the number of sets; enter q to stop: 18 
 * How many sides and how many dice? 6 3
 * Here are 18 sets of 3 6-sided throws.
 * 12 10 6 9 8 14 8 15 9 14 12 17 11 7 10
 * 13 8 14
 * How many sets? Enter q to stop: q
 */

int main(void)
{
    int dice; 
    int sets;
    int sides;
    int status;
    srand((unsigned int) time(0)); /* randomize seed */ 
    printf("Enter the number of sets; enter q to stop.\n"); 
    while (scanf("%d", &sets) == 1)
    {
        printf("How many sides and how many dice?\n");
        if ((status =scanf("%d %d", &sides, &dice)) != 2) {
            if (status == EOF)
                break; /* exit loop */
            else 
            {
                printf("You should have entered two integers."); 
                printf(" Let's begin again.\n");
                while (getchar() != '\n')
                    continue; /* dispose of bad input */ 
                printf("Enter the number of sets; enter q to stop.\n"); 
                continue; /* new loop cycle */
            } 
        }
        printf("Here are %d sets of %d %d-sided throws\n", sets, dice, sides);
        for (int i = 0;i < sets;i++)
        {
            printf("%d ", roll_n_dice(dice, sides));
        }
        printf("\n");
        printf("Enter the number of sets; enter q to stop.\n"); 
        /*roll = roll_n_dice(dice, sides);*/
        /*printf("You have rolled a %d using %d %d-sided dice.\n",*/
        /*roll, dice, sides);*/
    }
    /*printf("The rollem() function was called %d times.\n", roll_count); [> use extern variable <]*/
    /*printf("GOOD FORTUNE TO YOU!\n");*/
    return 0; 
}
