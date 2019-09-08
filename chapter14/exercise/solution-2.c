/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Sun Sep  8 06:41:52 2019
 ************************************************************************/

/* Write a program that prompts the user to enter the day, month, and year. 
 * The month can be a month number, a month name, or a month abbreviation. 
 * The program then should return the total number of days in the year up through the given day. 
 * (Do take leap years into account.)
 */

#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>
#include <string.h>

struct MonthInfo
{
    char month_name[20];
    char month_abbr[4];
    int number_of_days;
    int month_number;
};
struct MonthInfo month_info_array[2][12] = {
    {
        {"January", "Jan", 31, 1},
        {"Feburary", "Feb", 28, 2},
        {"March", "Mar", 31, 3},
        {"April", "Apr", 30, 4},
        {"May", "May", 31, 5},
        {"June", "Jun", 30, 6},
        {"July", "Jul", 31, 7},
        {"August", "Aug", 31, 8},
        {"September", "Sep", 30, 9},
        {"October", "Oct", 31, 10},
        {"November", "Nov", 30, 11},
        {"December", "Dec", 31, 12},
    },
    {
        {"January", "Jan", 31, 1},
        {"Feburary", "Feb", 29, 2},
        {"March", "Mar", 31, 3},
        {"April", "Apr", 30, 4},
        {"May", "May", 31, 5},
        {"June", "Jun", 30, 6},
        {"July", "Jul", 31, 7},
        {"August", "Aug", 31, 8},
        {"September", "Sep", 30, 9},
        {"October", "Oct", 31, 10},
        {"November", "Nov", 30, 11},
        {"December", "Dec", 31, 12},
    },
};
int get_month_number_from_month_name(char *);
int get_month_number_from_month_abbr(char *);
int total_days(int, int, int);
int is_leap_year(int);
int main(void) {
    int year;
    int month;
    int day;
    char temp[20];
    int choice;
    printf("Please enter year of format yyyy: ");
    scanf("%d", &year);
    printf("Now select month format:\n");
    printf("a) month number b) month name\n");
    printf("c) month abbreviation\n");
    scanf("%s", temp);
    choice = temp[0];
    switch (choice)
    {
        case 'a':
            printf("Now enter month number: ");
            scanf("%d", &month);
            if (month < 1 or month > 12)
            {
                fprintf(stderr, "Invalid month number: %d\n", month);
                exit(EXIT_FAILURE);
            }
            break;
        case 'b':
            printf("Now enter month name: ");
            scanf("%s", temp);
            month = get_month_number_from_month_name(temp); 
            if (month < 1 or month > 12)
            {
                fprintf(stderr, "Invalid month name: %s\n", temp);
                exit(EXIT_FAILURE);
            }
            break;
        case 'c':
            printf("Now enter month abbreviation: ");
            scanf("%s", temp);
            month = get_month_number_from_month_abbr(temp); 
            if (month < 1 or month > 12)
            {
                fprintf(stderr, "Invalid month abbreviation: %s\n", temp);
                exit(EXIT_FAILURE);
            }
            break;
        default:
            fprintf(stderr, "Invalid choice");
            exit(EXIT_FAILURE);
            break;
    } 
    printf("Please enter day: ");
    scanf("%d", &day);
    printf("Total days are %d\n", total_days(year, month, day));

    return 0;
}

int get_month_number_from_month_name(char *month_name)
{
    extern struct MonthInfo month_info_array[][12];
    for (int i = 0;i < 12;i++)
    {
        if (!strcmp(month_name, month_info_array[0][i].month_name))
        {
            return i + 1;
        }
    }
    return 0;
}


int get_month_number_from_month_abbr(char *month_abbr)
{
    extern struct MonthInfo month_info_array[][12];
    for (int i = 0;i < 12;i++)
    {
        if (!strcmp(month_abbr, month_info_array[0][i].month_abbr))
        {
            return i + 1;
        }
    }
    return 0;
}

int total_days(int year, int month, int day)
{
    extern struct MonthInfo month_info_array[][12];
    int leap_year = is_leap_year(year);
    int days = 0;
    for (int i = 1;i < month;i++)
    {
        days += month_info_array[leap_year][i - 1].number_of_days;
    }
    return days + day;
}

int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
