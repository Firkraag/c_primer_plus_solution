/*************************************************************************
	> File Name: forc99.c
	> Author: 
	> Mail: 
	> Created Time: Sun 28 Jul 2019 02:03:12 AM CST
 ************************************************************************/

#include <stdio.h>

/* Listing 12.2 -- new C99 block rules
 */
int main(void) {
    int n = 8;

    printf("    Initially, n = %d at %p\n", n, &n);
    for (int n = 1;n < 3;n++) 
    { 
        printf("    loop 1: n = %d at %p\n", n, &n);
    } 
    printf("After loop 1: loop 1: n = %d at %p\n", n, &n);
    for (int n = 1;n < 3;n++) 
    { 
        printf("    loop 2: n = %d at %p\n", n, &n);
        int n = 6;
        printf("    loop 2: n = %d at %p\n", n, &n);
        n++; 
    } 
    printf("After loop 2: n = %d at %p\n", n, &n);

    return 0;
}
