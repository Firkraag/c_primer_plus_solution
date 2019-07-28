/*************************************************************************
	> File Name: global.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 28 13:46:48 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

int units = 0;
void critic(void);


/* Listing 12.4 -- usses an external variable 
 */
int main(void) {
    extern int units;

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56 )
    {
        critic();
    } 
    printf("You must have looked it up!\n");

    return 0;
}

void critic(void)
{
    printf("No luck, my friend. Try again.\n");
    scanf("%d", &units);
}
