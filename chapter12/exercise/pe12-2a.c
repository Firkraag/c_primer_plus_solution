/*************************************************************************
	> File Name: pe12-2a.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul 29 15:12:31 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <assert.h>
static int mode;
static double distance;
static double fuel_consumed;

void set_mode(int mode_)
{
    extern int mode;
    assert(mode_ >= 0);
    if (mode_ <= 1)
    {
       mode = mode_; 
    }
    else
    {
        printf("Invalid mode specified. Mode 1(US) used.\n");
        mode = 1;
    }
}

void get_info()
{ 
    extern int mode;
    extern double distance;
    extern double fuel_consumed;
    if (mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &fuel_consumed);
    }
    else
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &fuel_consumed);
    }
}

void show_info()
{
    extern int mode;
    extern double distance;
    extern double fuel_consumed;
    if (mode == 0)
    {
        printf("Fuel consumption is %f liters per 100 km.\n", fuel_consumed / (distance / 100));
    }
    else
    {
        printf("Fuel consumption is %f miles per gallon\n", distance / fuel_consumed);
    }
}
