/*************************************************************************
	> File Name: fgets1.c
	> Author: 
	> Mail: 
	> Created Time: Thu Jul 18 10:28:44 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  STLEN 14

/* fgets1.c -- using fgets() and fputs()
 */
int main(void) {
    char words[STLEN];

    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");

    return 0;
}
