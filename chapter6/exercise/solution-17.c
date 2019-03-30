/*************************************************************************
	> File Name: solution-17.c
	> Author: 
	> Mail: 
	> Created Time: Sun 31 Mar 2019 02:17:59 AM CST
 ************************************************************************/

#include <stdio.h>
#define OriginalMoney 1000000
#define InterestRate 0.08
#define EachTimeWithdraw 100000
/* Chuckie Lucky won a million dollars (after taxes), which he places in an account that
earns 8% a year. On the last day of each year, Chuckie withdraws $100,000. Write a
program that finds out how many years it takes for Chuckie to empty his account. */
int main(void) {
    double balance = OriginalMoney;
    int year = 1;

    do {
        balance += balance * InterestRate;
        printf("%d year, before withdraw $%d, the balance is $%f\n", year, EachTimeWithdraw, balance);
        balance -= (balance >= EachTimeWithdraw ? EachTimeWithdraw : balance);
        printf("%d year, after withdraw $%d, the balance is $%f\n", year++, EachTimeWithdraw, balance);

    } while (balance > 0); 
} 

