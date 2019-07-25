/*************************************************************************
	> File Name: copy2.c
	> Author: 
	> Mail: 
	> Created Time: Wed Jul 24 17:23:05 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40

/* Listing 11.26 -- strcpy() demo */
int main(void) {
    const char *orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char *ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig);
    puts(copy);
    puts(ps);

    return 0;
}
