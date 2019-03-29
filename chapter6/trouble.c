/*************************************************************************
	> File Name: trouble.c
	> Author: 
	> Mail: 
	> Created Time: Thu Mar 28 20:34:38 2019
 ************************************************************************/

#include <stdio.h>

/* misuse of = will cause infinite loop
 */
int main(void) {
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);

    while (status = 1)
    {
        sum += num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);

    }
}
