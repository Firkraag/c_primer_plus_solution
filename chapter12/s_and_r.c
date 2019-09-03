/*************************************************************************
	> File Name: s_and_r.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Jul 2019 02:20:29 AM CST
 ************************************************************************/
/* Listing 12.9 -- file for rand1() and srand1()
 * uses ANSI C portable algorithm
 */
#include <stdio.h>
static unsigned long int next = 1; /* the seed */

int rand1(void)
{
    /* magic formula to generate pseudrandom number
     */
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}
void srand1(unsigned int seed)
{
    next = seed;
}
