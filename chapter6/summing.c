/*************************************************************************
  > File Name: summing.c
  > Author: 
  > Mail: 
  > Created Time: Mon Mar 25 00:59:18 2019
 ************************************************************************/

#include <stdio.h>
/* sums integers entered interactively */
int main(void) {
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status == 1) {
        sum += num;
        printf("Please enter an integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("THose integers sum to %ld.\n", sum);

    return 0;
}
