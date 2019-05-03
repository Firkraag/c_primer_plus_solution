/*************************************************************************
	> File Name: solution-9.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  2 14:21:07 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdbool.h> 


/* 
Write a program that accepts a positive integer as input and then displays all the prime numbers smaller than or equal to that number.
*/
int main(void) {
    int number;
    bool is_prime(int);

    printf("Please enter an integer: "); 
    scanf("%d", &number);

    for (int i = 2 ; i <= number ; i++)
    {
        if (is_prime(i)) {
            printf("%d\t", i);
        }
    } 
    
}

bool is_prime(int number) {
    for (int i = 2; i * i <= number; i++)
    {
        if (!(number % i)) {
            return false;
        }
    }
    return true;
}
