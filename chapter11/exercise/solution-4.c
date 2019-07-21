/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 21 18:53:03 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

#define  SIZE 1000

/* Design and test a function like that described in Programming Exercise 3 except that it accepts a second parameter specifying the maximum number of characters that can be read.
 */
int main(void) {
    int get_word(char *, int);
    char string[SIZE];
    while (get_word(string, 1) > 0)
    {
        printf("%s\n", string);
    } 
}
// return length of word, n is the maximum number of characters that can be read.
int get_word(char *string, int n)
{
    assert(n >= 1);
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
    while (word_length < n && (c = getchar()) != EOF)
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
