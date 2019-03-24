/*************************************************************************
  > File Name: increment_decrement.c
  > Author: 
  > Mail: 
  > Created Time: Sun Mar 17 20:58:08 2019
 ************************************************************************/

#include <stdio.h>

int main(void) {
    int a[10];
    int *p = a;

    //The increment and decrement operators affect only a modifiable lvalue.
    a[0] = 0;
    a[0]++;
    (*p)++;
    printf("%d\n", a[0]);
    printf("%d\n", *p++);
}
