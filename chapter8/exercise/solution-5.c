/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jun 23 03:08:37 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* Modify the guessing program of Listing 8.4 so that it uses a more intelligent guessing strategy. 
 * For example, have the program initially guess 50, and have it ask the user whether the guess is high, low, or correct. 
 * If, say, the guess is low, have the next guess be halfway between 50 and 100, that is, 75. 
 * If that guess is high, let the next guess be halfway between 75 and 50, and so on. 
 * Using this binary search strategy, the program quickly zeros in on the correct answer, at least if the user does not cheat.
*/


int main(void)
{
    int low = 1;
    int high = 100;
    printf("Pick an integer from 1 to 100. I will try to guess "); 
    printf("it.\nRespond with a y if my guess is right and with"); 
    printf("\nan n if it is wrong.\n");
    /*printf("Uh...is your number %d?\n", guess);*/
    while (low <= high) /* get response, compare to y */ 
    {
        int guess = (low + high) / 2;
        printf("Is it %d?\n", guess);
        int ch = getchar();

        if (ch == 'y')
        {
            printf("I knew I could do it!\n");
            break;
        }
        else if ( ch == 'h')
        {
            /*printf("Too high!\n");*/
            high = guess - 1;
        }
        else if (ch == 'l')
        {
            /*printf("Too low\n");*/
            low = guess + 1;
        }

        while ((ch = getchar()) != '\n')
            ;
    }
    return 0; 
}

