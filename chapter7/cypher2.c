/*************************************************************************
	> File Name: cypher2.c
	> Author: 
	> Mail: 
	> Created Time: Tue Apr  2 13:34:28 2019
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>
// cypher.2 --- alters input, preserving non-letters

int main(void) {
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if ( isalpha(ch))
            putchar(ch + 1);
        else
            putchar(ch);
    }
    putchar(ch);

    return 0;
}
