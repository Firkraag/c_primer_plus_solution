/*************************************************************************
	> File Name: echo_eof.c
	> Author: 
	> Mail: 
	> Created Time: Sun May  5 16:48:48 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* repeats input to end of file
 */
int main(void) {
    int ch;

    while ((ch = getchar()) != EOF )
    {
        putchar(ch);
    } 
}
