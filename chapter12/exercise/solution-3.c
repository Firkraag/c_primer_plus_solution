/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul 29 15:52:48 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <assert.h>

int set_mode(int mode);
void get_info(int mode, double *distance, double *fuel_consumed);
void show_info(int mode, double *distance, double *fuel_consumed);


/* Redesign the program described in Programming Exercise 2 so that it uses only automatic variables. 
 * Have the program offer the same user interface—that is, it should prompt the user to enter a mode, and so on. 
 * You’ll have to come up with a different set of function calls, however.
 */
int main(void)
{
    int mode;
    double distance;
    double fuel_consumed;
    printf("Enter 0 for metric mode, 1 for US mode: "); 
    scanf("%d", &mode);
    while (mode >= 0)
    {
        mode = set_mode(mode);
        get_info(mode, &distance, &fuel_consumed);
        show_info(mode, &distance, &fuel_consumed);
        printf("Enter 0 for metric mode, 1 for US mode"); printf(" (-1 to quit): ");
        scanf("%d", &mode); 
    }
    printf("Done.\n");
    return 0; 
}
int set_mode(int mode)
{
    assert(mode >= 0);
    if (mode <= 1)
    {
        return mode;
    }
    else
    {
        printf("Invalid mode specified. Mode 1(US) used.\n");
        return 1;
    }
}

void get_info(int mode, double *distance, double *fuel_consumed)
{ 
    if (mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", fuel_consumed);
    }
    else
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", fuel_consumed);
    }
}

void show_info(int mode, double *distance, double *fuel_consumed)
{
    if (mode == 0)
    {
        printf("Fuel consumption is %f liters per 100 km.\n", *fuel_consumed / (*distance / 100));
    }
    else
    {
        printf("Fuel consumption is %f miles per gallon\n", *distance / *fuel_consumed);
    }
}
