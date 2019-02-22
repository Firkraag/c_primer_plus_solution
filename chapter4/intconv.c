/*************************************************************************
	> File Name: intconv.c
	> Author: 
	> Mail: 
	> Created Time: Thu Feb 21 12:17:06 2019
 ************************************************************************/

#include <stdio.h>
#define PAGES 336
#define WORD3 65618


int main(void) {
    short num  = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf("num as int and char: %d %c\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %c\n", WORD3, (short) WORD3, WORD3);
}
