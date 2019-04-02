/*************************************************************************
	> File Name: solution-16.c
	> Author: 
	> Mail: 
	> Created Time: Sun 31 Mar 2019 01:59:17 AM CST
 ************************************************************************/

#include<stdio.h>
#define DaphneOriginalInvestment 100
#define DeirdreOriginalInvestment 100
#define DaphneInterest 0.1
#define DeirdreCompoundedInterest 0.05
/* Daphne invests $100 at 10% simple interest. (That is, every year, the investment earns
an interest equal to 10% of the original investment.) Deirdre invests $100 at 5% interest
compounded annually. (That is, interest is 5% of the current balance, including previous
addition of interest.) Write a program that finds how many years it takes for the value
of Deirdre’s investment to exceed the value of Daphne’s investment. Also show the two
values at that time. 
*/

int main(void) {
    double Daphne_balance = DaphneOriginalInvestment;
    double Deirdre_balance = DeirdreOriginalInvestment;
    int i = 1;
    do {
        Daphne_balance += DaphneOriginalInvestment * DaphneInterest;
        Deirdre_balance += Deirdre_balance * DeirdreCompoundedInterest;
        printf("%d year, Daphne_balance = %f, Deirdre_balance = %f\n", i++, Daphne_balance, Deirdre_balance);
    } while (Daphne_balance >= Deirdre_balance);
}
