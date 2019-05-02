/*************************************************************************
	> File Name: solution-8.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  2 11:39:40 2019
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

/*  Modify assumption a. in exercise 7 so that the program presents a menu of pay rates from which to choose. Use a switch to select the pay rate. The beginning of a run should look something like this:
***************************************************************** 
Enter the number corresponding to the desired pay rate or action: 
1) $8.75/hr 2) $9.33/hr
3) $10.00/hr 4) $11.20/hr
5) quit 
*****************************************************************
If choices 1 through 4 are selected, the program should request the hours worked. The program should recycle until 5 is entered. If something other than choices 1 through 5 is entered, the program should remind the user what the proper choices are and then recycle. Use #defined constants for the various earning rates and tax rates.
*/
int main(void) {
    int work_hour;
    double gross_pay, taxes, net_pay;
    double basic_pay_rate, overtime_pay_rate;
    int status, choice;
    while (1)
    {
        printf("Enter the number corresponding to the desired pay rate or action: \n");
        status = scanf("%d", &choice);
        if ((status != 1) or (choice < 1) or (choice > 5))
        {
            printf("The valid choices are choices 1 through 5, please retry\n"); 
            continue;
        } 
        if (choice == 5)
        {
            break;
        }
        
        if (choice == 1)
        {
            basic_pay_rate = 8.75;
        }
        else if ( choice == 2) {
            basic_pay_rate = 9.33;
        }
        else if ( choice == 3) {
            basic_pay_rate = 10.00;
        }
        else {
            basic_pay_rate = 11.20;
        }

        overtime_pay_rate = basic_pay_rate * 1.5;
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



