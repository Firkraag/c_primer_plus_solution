/*************************************************************************
	> File Name: order.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 12 08:26:58 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
int data[2] = {100, 200};
int moredata[2] = {300, 400};


/* order.c -- precedence in pointer operations */
int main(void) {
    int *p1, *p2, *p3;

    p1 = p2 = data;
    p3 = moredata;
    printf(" *p1 = %d,  *p2 = %d,   *p3 = %d\n",
            *p1,    *p2,    *p3);
    printf(" *p1++ = %d,  *++p2 = %d,   (*p3)++ = %d\n",
            *p1++,    *++p2,    (*p3)++);
    printf(" *p1 = %d,  *p2 = %d,   *p3 = %d\n",
            *p1,    *p2,    *p3);
}
