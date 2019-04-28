/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat Apr 27 21:23:26 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* Write a program that reads input until encountering #. Have the program print each input character and its ASCII decimal code. 
 * Print eight character-code pairs per line. 
 * Suggestion: Use a character count and the modulus operator (%) to print a newline character for every eight cycles of the loop.
 */
int main(void) {
    int ch;
    int counter = 1;

    while ((ch = getchar()) != '#' )
    {
        if (ch != '\n' )
        {
            printf("%c %d%c", ch, ch, (counter % 8) ? '\t' : '\n');
            counter++;
        } 
    } 
}
