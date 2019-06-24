/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jun 23 01:45:45 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>


/* Write a program that reads input as a stream of characters until encountering EOF. 
 * Have the program print each input character and its ASCII decimal value. 
 * Note that characters preceding the space character in the ASCII sequence are nonprinting characters.
 * Treat them specially. If the nonprinting character is a newline or tab, print \n or \t, respectively. Otherwise, use control-character notation. 
 * For instance, ASCII 1 is Ctrl+A, which can be displayed as ^A. Note that the ASCII value for A is the value for Ctrl+A plus 64. 
 * A similar relation holds for the other nonprinting characters. 
 * Print 10 pairs per line, except start a fresh line each time a newline character is encountered. 
 * (Note: The operating system may have special interpretations for some control characters and keep them from reaching the program.)
*/

int main(void) {
    int ch;
    int counter = 0;

    while ((ch = getchar()) != EOF )
    {
        if (ch == '\n')
        {
            printf("\\n %d", ch);
            putchar(ch);
            counter = 0;
            continue;
        }
        else if (ch == '\t')
        {
            printf("\\t %d", ch);
        }
        else if (ch < ' ')
        {
            printf("^%c %d", ch + 64, ch);
        }
        else if (ch > ' ' and ch < '\x7f')
        {
            printf("%c %d", ch, ch);
        }
        else
        {
            printf("%c %d", ch, ch);
        }

        if (++counter == 10)
        {
            putchar('\n');
            counter = 0;
        }
        else 
        {
            putchar('\t');
        }
    } 
}
