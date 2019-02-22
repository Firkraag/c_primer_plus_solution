/*************************************************************************
	> File Name: stringf.c
	> Author: 
	> Mail: 
	> Created Time: Thu Feb 21 12:10:07 2019
 ************************************************************************/

#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void) {
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);
}
