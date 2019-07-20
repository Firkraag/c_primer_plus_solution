/*************************************************************************
	> File Name: put2.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 19 20:16:38 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>


/* prints a string and counts characters
 */
int main(void) {

}

int put2(const char *string)
{
    int count = 0;

    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return count;
}
