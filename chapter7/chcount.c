/*************************************************************************
	> File Name: chcount.c
	> Author: 
	> Mail: 
	> Created Time: Wed Apr  3 17:06:45 2019
 ************************************************************************/

#include <stdio.h>
#define PERIOD '.'
// use the logical AND operator
int main(void) {
    char ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD )
    {
        if (ch != '"' && ch != '\'')
        {
            charcount++;
        }

    } 
    printf("There are %d non-quote characters.\n", charcount); 

    return 0;
}
