#include <stdio.h> 

#define BASIC_WORK_HOURS_PER_WEEK 40
#define BASIC_PAY_RATE 10.00
#define OVERTIME_PAY_RATE (BASIC_PAY_RATE * 1.5)
#define FIRST_LEVEL_TAX_RATE 0.15
#define SECOND_LEVEL_TAX_RATE 0.20
#define THIRD_LEVEL_TAX_RATE 0.25
#define FIRST_LEVEL_TAX_BOUNDARY 300
#define SECOND_LEVEL_TAX_BOUNDARY (FIRST_LEVEL_TAX_BOUNDARY + 150)
/* Write a program that requests the hours worked in a week and then prints the gross pay, the taxes, and the net pay. Assume the following:
a. Basic pay rate = $10.00/hr
b. Overtime (in excess of 40 hours) = time and a half 
c. Tax rate: #15% of the first $300
20% of the next $150
25% of the rest
Use #define constants, and don’t worry if the example does not conform to current tax law.
*/
int main(void) {
    int work_hour;
    double gross_pay, taxes, net_pay;

    scanf("%d", &work_hour);
    if (work_hour <= BASIC_WORK_HOURS_PER_WEEK) {
        gross_pay = BASIC_PAY_RATE * work_hour ;
    }
    else {
        gross_pay = BASIC_WORK_HOURS_PER_WEEK * BASIC_PAY_RATE;
        gross_pay += OVERTIME_PAY_RATE * (work_hour - BASIC_WORK_HOURS_PER_WEEK);
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
    return  0;
}



