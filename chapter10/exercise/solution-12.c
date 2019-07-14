/*************************************************************************
	> File Name: solution-12.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 14 17:26:27 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  MONTHS 12
#define  YEARS 5

/* Rewrite the rain program in Listing 10.7 so that the main tasks are performed by functions instead of in main().
 */
int main(void) {
    void year_rain_info(int years, int months, const float rain[years][months]);
    void month_rain_info(int years, int months, const float rain[years][months]);
    // initializing rainfall data for 2010 - 2014
    const float rain[YEARS][MONTHS] = 
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6}, 
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3}, 
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4}, 
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2}, 
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    year_rain_info(YEARS, MONTHS, rain);
    month_rain_info(YEARS, MONTHS, rain);
    return 0;
}
void year_rain_info(int years, int months, const float rain[years][months])
{
    int year, month;
    float subtot, total;

    printf(" YEAR RAINFALL (inches)\n");
    for (year = 0,total = 0;year < years;year++)
    {
        for (month = 0, subtot = 0; month < months; month++)
        {
            subtot += rain[year][month];
        }
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / years);
}
void month_rain_info(int years, int months, const float rain[years][months])
{
    int month, year;
    float subtot;
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct "); 
    printf(" Nov Dec\n");
    for (month = 0; month < months; month++)
    {
        for (year = 0, subtot = 0; year < years; year++)
        {
            subtot += rain[year][month];
        }
        printf("%4.1f", subtot/years);
    }
    printf("\n");
}
