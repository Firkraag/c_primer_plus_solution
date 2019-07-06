/*************************************************************************
	> File Name: :e misuse.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jul  6 20:43:33 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* uses a function incorrectly
 */
int main(void) {
    int imax();

    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

    return 0;
}

int imax(n, m)
    int n, m;
{
    return n > m ? n : m;
}
