/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Tue Sep 10 11:55:44 2019
 ************************************************************************/
/*  Write a function that rotates the bits of an unsigned int by a specified number of bits to the left. 
 *  For instance, rotate_l(x,4) would move the bits in x four places to the left, 
 *  and the bits lost from the left end would reappear at the right end. 
 *  That is, the bit moved out of the high-order position is placed in the low-order position. Test the function in a program.
 */

#include <stdio.h>
#include <iso646.h>
#include <limits.h>
#define TOTAL_BITS (sizeof(unsigned) * CHAR_BIT)
unsigned rotate_l(unsigned number, unsigned bits);

int main(void) {
    unsigned int number;
    unsigned int bits;
    while (printf("Please enter an value and rotate number, enter non numeric to exit: \n"), scanf("%u %u", &number, &bits) == 2)
    {
        printf("The result of %u rotated  %u bits is %u\n", number, bits, rotate_l(number, bits));
    }
    return 0;
}

unsigned rotate_l(unsigned number, unsigned bits)
{
    if (bits == 0 or bits >= TOTAL_BITS)
    {
        return number;
    }
    else
    {
        return (number << bits) | (number >> (TOTAL_BITS - bits));
    }

}
