/*************************************************************************
	> File Name: ifdef.c
	> Author: 
	> Mail: 
	> Created Time: Thu Sep 12 19:28:47 2019
 ************************************************************************/
/* Listing 16.9 -- uses conditional compilation
 */
#include <stdio.h>
#include <iso646.h>
/*#define JUST_CHECKING*/
#define LIMIT 4


int main(void) {
    int i;
    int total = 0;

    for (int i = 1;i <= LIMIT ;i++)
    {
        total += 2 * i * i + 1;
    #ifdef JUST_CHECKING
        printf("i=%d, running total = %d\n", i, total);
    #endif
    }
    printf("Grand total = %d\n", total);
    return 0;
}
