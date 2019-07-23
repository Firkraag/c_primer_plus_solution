/*************************************************************************
	> File Name: solution-16.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 23 11:11:38 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>
#include <ctype.h>

/* Write a program that reads input until end-of-file and echoes it to the display. 
 * Have the program recognize and implement the following command-line arguments:
 * -p Print input as is
 * -u Map input to all uppercase 
 * -l Map input to all lowercase
 * Also, if there are no command-line arguments, let the program behave as if the –p argument had been used.
 */
int main (int argc, char *argv[]) 
{
    int ch;
    enum {SAME, UPPER, LOWER} option = SAME;

    for (int i = 1;i < argc;i++)
    {
        if (!strcmp(argv[i], "-p"))
        {
            option = SAME;
        }
        else if (!strcmp(argv[i], "-u"))
        {
            option = UPPER;
        }
        else if (!strcmp(argv[i], "-l"))
        {
            option = LOWER;
        }
    }
    while ((ch = getchar()) != EOF)
    {
        if (option == SAME)
        {
            putchar(ch);
        }
        else if (option == UPPER)
        {
            putchar(toupper(ch));
        }
        else if (option == LOWER)
        {
            putchar(tolower(ch));
        }
    } 

    return 0;
}
