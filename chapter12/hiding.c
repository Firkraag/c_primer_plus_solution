/*************************************************************************
	> File Name: hiding.c
	> Author: 
	> Mail: 
	> Created Time: Sun 28 Jul 2019 01:54:24 AM CST
 ************************************************************************/

#include <stdio.h>

/* Listing 12.1 -- variables in blocks
 */
int main(void) {
    int x = 30;
    printf("x in outer block: %d at %p\n", x, &x);
    {
        int x = 77;
        printf("x in inner block: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);
    while (x++ < 33) 
    {
        int x = 100;
        x++;
        printf("x in while block: %d at %p\n", x, &x);
    } 
    printf("x in outer block: %d at %p\n", x, &x);
    
    return 0;
}
