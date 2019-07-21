/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 21 19:58:34 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define SIZE 1000



/* Design and test a function that searches the string specified 
 * by the first function parameter for the first occurrence of a character specified by the second function parameter. 
 * Have the function return a pointer to the character if successful, 
 * and a null if the character is not found in the string. 
 * (This duplicates the way that the library strchr() function works.) 
 * Test the function in a complete program that uses a loop to provide input values for feeding to the function.
 */
int main(void) {
    char *strchr(const char *, int);
    char string[SIZE];
    char ch;
    
    while (printf("Please enter a word and a character:\n"),scanf("%s %c", string, &ch) == 2)
    {
        char *pos = strchr(string, ch);
        if (pos)
        {
            printf("character '%c' is the %ldth character of string \"%s\"\n", ch, pos - string + 1, string);
        }
        else
        {
            printf("cannot find character '%c' in string \"%s\"\n", ch, string);
        }
    } 
    printf("Done!");

    return 0;
}

char *strchr(const char *str, int ch)
{
    while (*str)
    {
        if (*str == ch)
        {
            return (char*)str;
        }
        else
        {
            str++;
        }
    } 
    return NULL;
}
