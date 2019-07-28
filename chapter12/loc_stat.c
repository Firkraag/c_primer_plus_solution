/*************************************************************************
	> File Name: loc_stat.c
	> Author: 
	> Mail: 
	> Created Time: Sun 28 Jul 2019 02:19:28 AM CST
 ************************************************************************/

#include <stdio.h>

void trystat(void);
/* Listing 12.3 -- using a local static variable
 */
int main(void) {

    for (int count = 1;count <= 3;count++) 
    {
        printf("Here comes iteration %d:\n", count);
        trystat();
    } 

    return 0;
}

void trystat(void)
{
    int fade = 1;
    static int stay = 1;
    int *ptr;

    {
        static int stay = 100;
        printf("stay = %d\n", stay++);
        ptr = &stay;
    }

    printf("fade = %d and stay = %d\n", fade++, stay++);
    printf("%d\n", *ptr);
}
