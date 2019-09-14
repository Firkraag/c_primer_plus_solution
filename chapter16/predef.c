/*************************************************************************
	> File Name: predef.c
	> Author: 
	> Mail: 
	> Created Time: Fri Sep 13 12:40:55 2019
 ************************************************************************/
/* Listing 16.12 -- predefined identifiers
 */
#include <stdio.h>
#include <iso646.h>
void why_me(void);

int main(void) {
    printf("The file is %s\n", __FILE__);
    printf("The date is %s.\n", __DATE__);
    printf("The time is %s.\n", __TIME__);
    printf("Tue version is %ld.\n", __STDC_VERSION__);
    printf("This is line %d.\n", __LINE__);
    printf("This function is %s\n", __func__);
    why_me();
    return 0;
}

void why_me(void)
{
    printf("This function is %s\n", __func__);
    printf("This is line %d.\n", __LINE__);
}
