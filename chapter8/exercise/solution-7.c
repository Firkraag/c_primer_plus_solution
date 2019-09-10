/*************************************************************************
	> File Name: solution-7.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jun 24 14:10:02 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

#define BASIC_WORK_HOURS_PER_WEEK 40
/*#define BASIC_PAY_RATE 10.00*/
/*#define OVERTIME_PAY_RATE (BASIC_PAY_RATE * 1.5)*/
#define FIRST_LEVEL_TAX_RATE 0.15
#define SECOND_LEVEL_TAX_RATE 0.20
#define THIRD_LEVEL_TAX_RATE 0.25
#define FIRST_LEVEL_TAX_BOUNDARY 300
#define SECOND_LEVEL_TAX_BOUNDARY (FIRST_LEVEL_TAX_BOUNDARY + 150)

/* Modify Programming Exercise 8 from Chapter 7 so that the menu choices are labeled by characters instead of by numbers; 
 * use q instead of 5 as the cue to terminate input.
 */

int main(void) {
    char get_first(void);
    int work_hour;
    double gross_pay, taxes, net_pay;
    double basic_pay_rate, overtime_pay_rate;
    char choice;
    while (1)
    {
        printf("Enter the number corresponding to the desired pay rate or action: \n"
        "a) $8.75/hr b) $9.33/hr\n"
        "c) $10.00/hr d) $11.20/hr\n"
        "q) quit \n");
        choice = get_first();
        putchar(choice);
        if ((choice < 'a' or choice > 'd') and choice != 'q')
        {
            printf("The valid choices are choices 'a' through 'd' or 'q' to quit,  please retry\n"); 
            continue;
        } 
        if (choice == 'q')
        {
            break;
        }
        
        if (choice == 'a')
        {
            basic_pay_rate = 8.75;
        }
        else if ( choice == 'b') {
            basic_pay_rate = 9.33;
        }
        else if ( choice == 'c') {
            basic_pay_rate = 10.00;
        }
        else {
            basic_pay_rate = 11.20;
        }

        overtime_pay_rate = basic_pay_rate * 1.5;
        printf("Please enter work hour\n"); 
        scanf("%d", &work_hour);
        if (work_hour <= BASIC_WORK_HOURS_PER_WEEK) {
            gross_pay = basic_pay_rate * work_hour ;
        }
        else {
            gross_pay = BASIC_WORK_HOURS_PER_WEEK * basic_pay_rate;
            gross_pay += overtime_pay_rate * (work_hour - BASIC_WORK_HOURS_PER_WEEK);
        }

        if (gross_pay <= FIRST_LEVEL_TAX_BOUNDARY)
        {
            taxes = gross_pay * FIRST_LEVEL_TAX_RATE;
        } 
        else if (gross_pay <= SECOND_LEVEL_TAX_BOUNDARY)
        {
            taxes = FIRST_LEVEL_TAX_BOUNDARY * FIRST_LEVEL_TAX_RATE + SECOND_LEVEL_TAX_RATE * (gross_pay - FIRST_LEVEL_TAX_BOUNDARY);
        }
        else {
            taxes = FIRST_LEVEL_TAX_BOUNDARY * FIRST_LEVEL_TAX_RATE + SECOND_LEVEL_TAX_RATE * (SECOND_LEVEL_TAX_BOUNDARY - FIRST_LEVEL_TAX_BOUNDARY) + THIRD_LEVEL_TAX_RATE * (gross_pay - SECOND_LEVEL_TAX_BOUNDARY);
        }
        net_pay = gross_pay - taxes; 
        printf("gross pay = %f, taxes = %f, net pay = %f\n", gross_pay, taxes, net_pay); 


    } 
    return  0;
}

char get_first(void) {
    int ch;
    ch = getchar();
    while (getchar() != '\n')
        continue; 
    return ch;
}


