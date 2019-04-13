/*************************************************************************
	> File Name: paint.c
	> Author: 
	> Mail: 
	> Created Time: Sat Apr 13 04:24:38 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define COVERAGE 350



/* uses conditional operator 
 */
int main(void) {
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n"); 
    while (scanf("%d", &sq_feet ) == 1)
    {
       cans = sq_feet / COVERAGE; 
       cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
       printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans"); 
       printf("Enter next value (q to quit):\n"); 
    } 

    return 0;
}
