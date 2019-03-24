/*************************************************************************
	> File Name: operator.c
	> Author: 
	> Mail: 
	> Created Time: Sun Mar 17 20:54:17 2019
 ************************************************************************/

#include <stdio.h>

int main(void) {
    int a = 1;
    int b = 2;
    int c = a + (b = 3);

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
