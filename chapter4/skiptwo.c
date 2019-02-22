/*************************************************************************
	> File Name: skiptwo.c
	> Author: 
	> Mail: 
	> Created Time: Fri Feb 22 10:34:53 2019
 ************************************************************************/

#include <stdio.h>
/* skiptwo.c -- skips over first two integers of input */
int main(void) {
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;
}
