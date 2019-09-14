/*************************************************************************
	> File Name: generic.c
	> Author: 
	> Mail: 
	> Created Time: Fri Sep 13 20:56:50 2019
 ************************************************************************/
/* Listing 16.13 -- 
 */
#include <stdio.h>
#include <iso646.h>
#define MYTYPE(X) _Generic((X), \
int: "int",\
float: "float",\
double: "double",\
default:"other"\
)

int main(void) {
    int d = 5;
    printf("%s\n", MYTYPE(d));
    printf("%s\n", MYTYPE(2.0 * d));
    printf("%s\n", MYTYPE(3L));
    printf("%s\n", MYTYPE(&d));

    return 0;
}
