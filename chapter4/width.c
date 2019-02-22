/*************************************************************************
	> File Name: width.c
	> Author: 
	> Mail: 
	> Created Time: Thu Feb 21 11:35:42 2019
 ************************************************************************/

#include <stdio.h>
#define PAGES 959

int main(void) {
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);


}
