/*************************************************************************
	> File Name: fgets2.c
	> Author: 
	> Mail: 
	> Created Time: Thu Jul 18 13:54:32 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define STLEN 10

/* using fgets() and fputs()
 */
int main(void) {
    char words[STLEN];

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n' )
    {
        fputs(words, stdout);
    } 
    puts("Done.");

    return 0;
}
