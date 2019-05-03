/*************************************************************************
	> File Name: solution-10.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  2 14:34:23 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

#define FIRST_LEVEL_TAX_RATE 0.15
#define SECOND_LEVEL_TAX_RATE 0.28

/*  The 1988 United States Federal Tax Schedule was the simplest in recent times. It had four categories, and each category had two rates. Here is a summary (dollar amounts are taxable income):
Category                    Tax
Single                      15% of first $17,850 plus 28% of excess
Head of Household           15% of first $23,900 plus 28% of excess
Married, Joint              15% of first $29,750 plus 28% of excess 
Married, Separate           15% of first $14,875 plus 28% of excess
    For example, a single wage earner with a taxable income of $20,000 owes 0.15 × $17,850 + 0.28 × ($20,000−$17,850). Write a program that lets the user specify the tax category and the taxable income and that then calculates the tax. Use a loop so that the user can enter several tax cases.
*/
int main(void) {
    int tax_category_choice, taxable_income;
    int first_level_tax_boundary; 
    double tax;

    while (1)
    {
printf("Please enter the number corresponding to the desired tax category\n"
"Category                    Tax\n" 
"1. Single                      15%% of first $17,850 plus 28%% of excess\n"
"2. Head of Household           15%% of first $23,900 plus 28%% of excess\n"
"3. Married, Joint              15%% of first $29,750 plus 28%% of excess\n"
"4. Married, Separate           15%% of first $14,875 plus 28%% of excess\n"
);
        scanf("%d", &tax_category_choice);
       
        switch (tax_category_choice)
        {
            case 1:
                first_level_tax_boundary = 17850;
                break;
            case 2:
                first_level_tax_boundary = 23900;
                break;
            case 3:
                first_level_tax_boundary = 29750;
                break;
            case 4:
                first_level_tax_boundary = 14875;
                break;
        }; 

        printf("Please enter your taxable income\n"); 
        scanf("%d", &taxable_income);
        if (taxable_income <= first_level_tax_boundary )
        {
            tax = taxable_income * FIRST_LEVEL_TAX_RATE; 
        }
        else {
            tax = first_level_tax_boundary * FIRST_LEVEL_TAX_RATE + (taxable_income - first_level_tax_boundary) * SECOND_LEVEL_TAX_RATE;
        }
        printf("Your tax is %f\n", tax); 
    }
    return  0;
}



