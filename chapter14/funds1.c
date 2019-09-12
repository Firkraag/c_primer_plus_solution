/*************************************************************************
	> File Name: funds1.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep  7 07:58:38 2019
 ************************************************************************/
/* Listing 14.5 -- passing structure members as arguments
 */
#include <stdio.h>
#include <iso646.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum(double, double);



int main(void) {
    struct funds stan = { 
        "Garlic-Melon Bank", 
        4032.27,
        "Lucky's Savings and Loan", 
        8543.94
    };
    printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));
    return 0;
}
double sum(double x, double y)
{
    return x + y;
}

