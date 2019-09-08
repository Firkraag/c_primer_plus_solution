/*************************************************************************
	> File Name: solution-1.c
	> Author: 
	> Mail: 
	> Created Time: Sun Sep  8 06:19:15 2019
 ************************************************************************/
/* Redo Review Question 5, but make the argument the spelled-out name of the month instead of the month number. 
 * (Don’t forget about strcmp ().) Test the function in a simple program.
 */
#include <stdio.h>
#include <iso646.h>
#include <string.h>

struct month_info
{
    char month_name[20];
    char month_abbr[4];
    int number_of_days;
    int month_number;
};
struct month_info array[12] = {
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
};
int remain_days(const char *month_name)
{
    int days = 0;
    int i;
    for (i = 0;i < 12;i++)
    {
        days += array[i].number_of_days;
        if (!strcmp(array[i].month_name, month_name))
        {
            break;
        }
    }
    if (i == 12)
    {
        return 0;
    }
    else
    {
        return days;
    }
}
int main(void)
{
    char month_name[20];
    while (printf("Please enter month name: "),scanf("%s", month_name) == 1)
    {
        printf("total days in a non-leap year up to and including %s is %d\n", month_name, remain_days(month_name));
    } 
    return 0;
}
