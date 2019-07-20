/*************************************************************************
	> File Name: put1.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 19 20:12:13 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>




/* prints a string without adding
 */
int main(void) {
    
}

void put1(const char *string)
{
    while (*string != '\0')
    {
        putchar(*string++);
    }  
}
