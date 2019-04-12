/*************************************************************************
	> File Name: wordcnt.c
	> Author: 
	> Mail: 
	> Created Time: Sat Apr 13 03:58:57 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdbool.h>
#include <ctype.h>

#define STOP '|'

/* counts characters, words, line
 */
int main(void) {
    char c;
    char prev;
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;

    printf("Enter text to be analysed (| to terminated):\n");
    prev = '\n';
    while ((c = getchar()) != STOP)
    {
        n_chars++;
        if (c == '\n')
        {
            n_lines++;
        } 
        if (!isspace(c) && !inword )
        {
            inword = true;
            n_words++;

        } 
        if (isspace(c) && inword )
        {
            inword = false;
        } 
        prev = c;
    } 
    if (prev != '\n' )
    {
        p_lines = 1;
    } 
    printf("characters = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines); 
    printf("partial lines = %d\n", p_lines); 
}
