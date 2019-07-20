/*************************************************************************
	> File Name: scan_str.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 19 19:54:23 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* using scanf()
 */
int main(void) {
    char name1[11], name2[11];
    int count;

    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("I read the %d names %s and %s.\n", count, name1, name2);

    return 0;
}
