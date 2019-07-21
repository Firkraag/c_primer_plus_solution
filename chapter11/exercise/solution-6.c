/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 21 20:12:21 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define SIZE 1000


/* Write a function called is_within() that takes a character and a string pointer as its two function parameters. 
 * Have the function return a nonzero value (true) if the character is in the string and zero (false) otherwise. 
 * Test the function in a complete program that uses a loop to provide input values for feeding to the function.
 */
int main(void) {
    unsigned is_within(char ch, const char *str);
    char string[SIZE];
    char ch;
    
    while (printf("Please enter a word and a character:\n"),scanf("%s %c", string, &ch) == 2)
    {
        unsigned pos = is_within(ch, string); 
        if (pos)
        {
            printf("character '%c' is the %uth character of string \"%s\"\n", ch, pos, string);
        }
        else
        {
            printf("cannot find character '%c' in string \"%s\"\n", ch, string);
        }
    } 
    printf("Done!");

    return 0;
}

/* return the relative position of `ch` in `str`
 */
unsigned is_within(char ch, const char *str)
{
    unsigned pos = 0;
    while (*str)
    {
        if (*str == ch)
        {
            return pos + 1;
        }
        else
        {
            str++;
            pos++;
        }
    } 
    return 0;
}
