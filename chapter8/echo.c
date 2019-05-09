/*************************************************************************
	> File Name: echo.c
	> Author: 
	> Mail: 
	> Created Time: Fri May  3 17:00:13 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* repeats input
 */
int main(void) {
    char ch;

    while ((ch = getchar()) != '#' )
    {
        putchar(ch);
    } 

    return 0;
}
