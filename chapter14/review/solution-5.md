# Problem
Write a function that, when given the month number, returns the total days in the year
up to and including that month. Assume that the structure template of question 3 and
an appropriate array of such structures are declared externally.
# Solution
```
struct month_info
{
    char month_name[20];
    char month_abbr[4];
    int number_of_days;
    int month_number;
};
struct month_info array[12] = {
    {"January", "Jan", 31, 1},
    {"Febuary", "Feb", 28, 2},
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
int remain_days(int month_number)
{
    extern struct month_info array[];
    int total = 0;
    for (int i = 0;i < month; i++)
    {
        total += array[i].number_of_days;
    }
    return total;
}
```
