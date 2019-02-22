/*************************************************************************
	> File Name: sizeof.c
	> Author: 
	> Mail: 
	> Created Time: Wed Feb 20 16:23:51 2019
 ************************************************************************/

#include <stdio.h>

int main(void) {
    short x;

    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(void(*)(void)) = %zu\n", sizeof(void(*)(void)));
    printf("sizeof(char[10]) = %zu\n", sizeof(char[10]));
    printf("sizeof 'a'  = %zu\n", sizeof 'a' ); // type of 'a' is int
    printf("sizeof &main  = %zu\n", sizeof &main );
    printf("sizeof \"hello\"  = %zu\n", sizeof "hello" );
    printf("sizeof x  = %zu\n", sizeof x );
    printf("sizeof (x + 1)  = %zu\n", sizeof (x + 1) ); // type of x + 1 is int
    printf("sizeof float constant is %zu\n", sizeof 12.34f);
    printf("sizeof double constant is %zu\n", sizeof 12.34);
}
