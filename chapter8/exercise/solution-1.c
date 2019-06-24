/*************************************************************************
	> File Name: solution-1.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jun 23 01:37:47 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* Devise a program that counts the number of characters in its input up to the end of file. 
 */

int main(void) {
    unsigned long number = 0;
    int ch;

    while ((ch = getchar()) != EOF )
    {
        number++;
    } 

    printf("The number of characters in this program's input up to the end of file is %lu\n", number);
    return 0;
}
