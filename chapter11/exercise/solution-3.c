/*************************************************************************
	> File Name: solution-3.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 20 12:33:18 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

#define  SIZE 1000
/* Design and test a function that reads the first word from a line of input into an array and discards the rest of the line. It should skip over leading whitespace. Define a word as a sequence of characters with no blanks, tabs, or newlines in it. Use getchar(), not
 */
int main(void) {
    int get_word(char *);
    char string[SIZE];
    while (get_word(string) > 0)
    {
        printf("%s\n", string);
    } 
}
// return length of word
int get_word(char *string)
{
    int c;
    int word_length = 0;
    // skipping leading whitespace
    while (isspace(c = getchar()))
    {
         ; 
    } 
    if (c == EOF)
    {
        *string = '\0';
        return 0;
    }
    else
    {
        *string++ = c;
        word_length = 1;
    }
    while ((c = getchar()) != EOF)
    {
        if (isspace(c))
        {
            *string = '\0';
            return word_length;
        }
        else
        {
            *string++ = c;
            word_length++;
        }
    } 
    *string = '\0';
    
    return word_length;
}
