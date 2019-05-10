/*************************************************************************
	> File Name: getlone.c
	> Author: 
	> Mail: 
	> Created Time: Fri May 10 09:01:42 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>




int main(void) {
    long get_long();
    for (int i = 0 ; i < 3 ; i++)
    {
        printf("%ld\n", get_long()); 
    } 

    return 0;
}

long get_long(void) {
    long input;
    char ch;

    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n' )
        {
            putchar(ch);
        } 
        printf(" is not an integer.\nPlease enter an "); 
        printf("integer value, such as 25, -178, or 3: "); 
    } 

    return input;
}
