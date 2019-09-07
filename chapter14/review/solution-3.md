# Problem
Devise a structure template that will hold the name of a month, a three-letter
abbreviation for the month, the number of days in the month, and the month number.
# Solution
```
struct month_info
{
    char month_name[20];
    char month_abbr[4];
    int number_of_days;
    int month_number;
}
```
