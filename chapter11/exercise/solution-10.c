/*************************************************************************
	> File Name: solution-10.c
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Jul 2019 12:06:59 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100
/* Write a function that takes a string as an argument and removes the spaces from the string. 
 * Test it in a program that uses a loop to read lines until you enter an empty line.
 * The program should apply the function to each input string and display the result.
 */
int main(void) {
    void strip(char *str);
    char string[SIZE];

    while (printf("Please enter a line:\n"), fgets(string, SIZE, stdin)) 
    {
        printf("Before remove the spaces:\n%s", string);
        strip(string);
        printf("After remove the spaces:\n%s\n", string);
    }; 

    return 0;
}

void strip(char *string)
{
    char ch;
    char *pos = string;
    while (ch = *string++)
    {
        if (!isspace(ch))
            *pos++ = ch;
    }
    *pos = '\0';
}
