/*************************************************************************
	> File Name: rand0.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Jul 2019 02:13:35 AM CST
 ************************************************************************/

/* Listing 12.7 -- produces random numbers
 * uses ANSI C portable algorithm
 */
#include <stdio.h>
static unsigned long int next = 1;

int rand0(void)
{
    /* magic formula to generate pseudrandom number
     */
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}
