/*************************************************************************
	> File Name: divisors.c
	> Author: 
	> Mail: 
	> Created Time: Wed Apr  3 16:34:55 2019
 ************************************************************************/

#include <stdio.h>
#include <stdbool.h>
/* nested ifs display divisors of a number */
int main(void) {
    unsigned long num, div;
    bool isPrime;

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while (scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++) {
            if ( num % div == 0)
            {
               if ( (div * div) != num) 
                   printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
               else
                   printf("%lu is divisible by %lu.\n", num, div);
               isPrime = false;
            }
        }
        if (isPrime) {
            printf("%lu is primes.\n", num);
        } 
        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");
    
    return 0;
}
