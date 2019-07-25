/*************************************************************************
	> File Name: compback.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 23 15:09:11 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>

/* Listing 11.22 -- strcmp returns
 */
int main(void) {
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));
    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));
    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));
    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));
    printf("strcmp(\"Z\", \"A\") is ");
    printf("%d\n", strcmp("Z", "A"));
    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));
}
