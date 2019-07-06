/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jun 24 14:01:37 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <ctype.h>

/* Modify the get_first() function of Listing 8.8 so that it returns the first non-whitespace character encountered. Test it in a simple program.
 */

int main(void) {
    int get_first(void);
    int ch;
    while ((ch = get_first()) != EOF)
    {
        putchar(ch);
    } 
    
}
/* return first non-whitespace character encounterd, also return EOF mark.
 */
int get_first(void) {
    int ch;

    while (isspace(ch = getchar()))
    {
        ;
    }
    return ch; 
}
