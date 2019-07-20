/*************************************************************************
	> File Name: addresses.c
	> Author: 
	> Mail: 
	> Created Time: Wed Jul 17 08:27:57 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  MSG "I'm special."
/* addresses of strings
 */
int main(void) {
    char ar[] = MSG;
    const char *pt = MSG;

    printf("address of \"I'm special\": %p \n", "I'm special");
    printf("       address ar: %p\n ", ar);
    printf("       address pt: %p\n ", pt);
    printf("       address MSG: %p\n ", MSG);
    printf("address of \"I'm special\": %p \n", "I'm special");

    return 0;
}
