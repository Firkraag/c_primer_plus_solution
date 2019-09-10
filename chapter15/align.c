/*************************************************************************
	> File Name: align.c
	> Author: 
	> Mail: 
	> Created Time: Tue Sep 10 10:37:38 2019
 ************************************************************************/
/* Listing 15.5 -- using -Alignof and Alignas
 */
#include <stdio.h>
#include <iso646.h>

int main(void) {
    double dx;
    char ca;
    char cx;
    double dz;
    char cb;
    char _Alignas(double) cz;

    printf("char alighment: %zd\n", _Alignof(char));
    printf("double alighment: %zd\n", _Alignof(double));
    printf("&dx: %p\n", &dx);
    printf("&ca: %p\n", &ca);
    printf("&cx: %p\n", &cx);
    printf("&dz: %p\n", &dz);
    printf("&cb: %p\n", &cb);
    printf("&cz: %p\n", &cz);

    return 0;
}
