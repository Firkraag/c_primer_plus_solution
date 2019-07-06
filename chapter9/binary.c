/*************************************************************************
	> File Name: binary.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jun 21 17:36:19 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* prints integer in binary form */
int main(void) {
    void to_binary(unsigned long n);
    unsigned long number;

    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1 )
    {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    } 
    printf("Done.\n");

    return 0;
}

void to_binary(unsigned long n)
{
    int r;
    r = n % 2;
    if (n >= 2)
    {
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0': '1');

    return ;
}
