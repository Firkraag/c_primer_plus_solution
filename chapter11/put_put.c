/*************************************************************************
	> File Name: put_put.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 19 20:19:00 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* user-defined output functions
 */
int main(void) {
    void put1(const char *);
    int put2(const char *);

    put1("If I'd as much money");
    put1(" as I could spend,\n");
    printf("I count %d characters.\n", put2("I never would cry old chairs to mend."));

    return 0;
}


void put1(const char *string)
{
    while (*string != '\0')
    {
        putchar(*string++);
    }  
}

int put2(const char *string)
{
    int count = 0;

    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return count;
}




