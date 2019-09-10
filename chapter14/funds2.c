/*************************************************************************
	> File Name: funds2.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep  7 08:02:44 2019
 ************************************************************************/

/* Listing 14.6 -- passing a pointer to a structure
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
double sum(const struct funds *);

int main(void) {
    struct funds stan = { 
        "Garlic-Melon Bank", 
        4032.27,
        "Lucky's Savings and Loan", 
        8543.94
    };
    printf("Stan has a total of $%.2f.\n", sum(&stan));
    return 0;
}
double sum(const struct funds *money)
{
    return money->bankfund + money->savefund;
}

