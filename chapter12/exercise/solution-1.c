/*************************************************************************
	> File Name: solution1.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul 29 14:44:41 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
void critic(int);

/* Rewrite the program in Listing 12.4 so that it does not use global variables.
 */
int main(void) {
    int units;

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56 )
    {
        critic(units);
    } 
    printf("You must have looked it up!\n");

    return 0;
}

void critic(int units)
{
    printf("No luck, my friend. Try again.\n");
    scanf("%d", &units);
}
