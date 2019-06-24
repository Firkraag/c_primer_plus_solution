/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jun 23 02:19:50 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <ctype.h>
#include <stdbool.h>

/* Write a program that reads input as a stream of characters until encountering EOF. 
 * Have it report the average number of letters per word. 
 * Don’t count whitespace as being letters in a word. 
 * Actually, punctuation shouldn’t be counted either, but don’t worry about that now. 
 * (If you do want to worry about it, consider using the ispunct() function from the ctype.h family.)
 */

int main(void) {
    bool is_word_letter(int);
    int ch;
    unsigned long word_number = 0, word_total_char = 0, word_char_number = 0;
    bool in_word = false;;

    while ((ch = getchar()) != EOF)
    {
        if (in_word && !is_word_letter(ch))
        {
            in_word = false;
            word_total_char += word_char_number;
            word_char_number = 0;

        }
        else if (!in_word && is_word_letter(ch))
        {
            in_word = true;
            word_number++;
            word_char_number = 1;
        }
        else if (in_word && is_word_letter(ch))
        {
            word_char_number++;
        }
    } 

    printf("The average number of letters per word is %lu / %lu = %.2f\n", word_total_char, word_number, (double) word_total_char / (double) word_number);

    return 0;
}


/* if `ch` is neither whitespace nor punctuation, then it is a word letter
 */
bool is_word_letter(int ch)
{
    return !(ispunct(ch) || isspace(ch));
}

