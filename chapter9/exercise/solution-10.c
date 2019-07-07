/*************************************************************************
	> File Name: solution-10.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul  7 18:08:00 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>




int main(void) {
    void to_base_n(unsigned long, unsigned);
    to_base_n(129, 8);
    putchar('\n');
    to_base_n(129, 10);
    putchar('\n');
    to_base_n(129, 2);
    putchar('\n');
}
/* Generalize the to_binary() function of Listing 9.8 to a to_base_n() function that takes a second argument in the range 2–10. 
 * It then should print the number that is its first argument to the number base given by the second argument. 
 * For example, to_ base_n(129,8) would display 201, the base-8 equivalent of 129. Test the function in a complete program.
 */
void to_base_n(unsigned long n, unsigned base)
{
    int r;
    
    r = n % base;
    if ( n >= base)
    {
        to_base_n(n / base, base);
    }
    putchar('0' + r);

}


