/*************************************************************************
	> File Name: solution-12.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul 22 12:58:15 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdbool.h>
#include <ctype.h>
/* Write a program that reads input up to EOF and reports the number of words, 
 * the number of uppercase letters, the number of lowercase letters, the number of punctuation characters, and the number of digits. 
 * Use the ctype.h family of functions.
 */

int main(void) {
    int ch;
    bool in_word = false;
    int upper_number = 0, lower_number = 0, punct_number = 0, digit_number = 0, word_number = 0;
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            lower_number++;
        }
        else if (isupper(ch))
        {
            upper_number++;
        }
        else if (ispunct(ch))
        {
            punct_number++;
        }
        else if (isdigit(ch))
        {
            digit_number++;
        }

        if (isspace(ch))
        {
            in_word = false;
        }
        if (!isspace(ch) and !in_word)
        {
            in_word = true;
            word_number++;
        }
    } 
    printf("The number of words = %d, the number of uppercase letters = %d, the number of lowercase letters = %d, the number of punctuation characters = %d, the number of digits = %d\n", word_number, upper_number, lower_number, punct_number, digit_number);

    return 0;
}
