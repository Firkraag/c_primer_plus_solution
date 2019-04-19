/*************************************************************************
	> File Name: switch.c
	> Author: 
	> Mail: 
	> Created Time: Sun Apr 14 17:57:27 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

int main(void) {
    int i;
    scanf("%d", &i);
    switch (i)
    {
        printf("Starting\n"); 
        case 1:
            printf("%d\n", i); 
            break;
        default:
            printf("No match\n"); 
    }; 
}
