/*************************************************************************
	> File Name: byebyte.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep 14 10:09:42 2019
 ************************************************************************/
/* Listing 16.16 -- atexit() example
 */
#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
void sign_off(void);
void too_bad(void);

int main(void) {
    int n;

    atexit(sign_off);
    puts("Enter an integer:");
    if (scanf("%d", &n) != 1)
    {
        puts("That's no integer!");
        atexit(too_bad);
        exit(EXIT_FAILURE);
    }
    printf("%d is %s.\n", n, (n % 2 == 0) ? "even" : "odd");
    return 0;
}

void sign_off(void)
{
    puts("Thus terminates another magnificant program from");
    puts("SeeSaw Software!");
}

void too_bad(void)
{
    puts("SeeSaw Software extends its heartfelt condolences");
    puts("to you upon the failure fo your program.");
}
