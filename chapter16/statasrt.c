/*************************************************************************
	> File Name: statasrt.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep 14 10:48:22 2019
 ************************************************************************/
/* Listing 16.19 -- static assert at compile time
 */
#include <stdio.h>
#include <iso646.h>
#include <limits.h>
_Static_assert(CHAR_BIT == 16, "16-bit char falsely assumed");

int main(void) {
    puts("char is 16 bits.");
    return 0;
}
