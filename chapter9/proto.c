/*************************************************************************
	> File Name: proto.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jul  6 20:49:29 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* uses a function prototype
 */
int main(void) {
    int imax(int, int);

    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

    return 0;
}

int imax(int n, int m)
{
    return n > m ? n : m;
}
