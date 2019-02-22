/*************************************************************************
	> File Name: scanf.c
	> Author: 
	> Mail: 
	> Created Time: Fri Feb 22 10:09:37 2019
 ************************************************************************/

#include <stdio.h>

int main(void) {
    int a;
    char b[50];
    char c[50];
    scanf("%d%s\n", &a, b);
    printf("%d, %s\n", a, b);
    scanf("%s\n", c);
    printf("%s\n", c);
}
