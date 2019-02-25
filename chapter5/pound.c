/*************************************************************************
	> File Name: pound.c
	> Author: 
	> Mail: 
	> Created Time: Mon Feb 25 19:41:04 2019
 ************************************************************************/

#include <stdio.h>
/* defines a function with an argument */
int main(void) {
    int times = 5;
    char ch = '!';
    float f = 6.0f;
    void pound(int);

    pound(times);
    pound(ch);
    pound(f);

    return 0;
}

void pound(int n)
{
    while (n-- > 0)
        printf("#");
    printf("\n");
}
