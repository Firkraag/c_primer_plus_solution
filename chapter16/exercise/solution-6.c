/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep 14 18:00:56 2019
 ************************************************************************/
/*  Modify Listing 16.17 so that it uses an array of struct names elements (as defined after the listing) instead of an array of double. 
 *  Use fewer elements, and initialize the array explicitly to a suitable selection of names.
 */
#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include <string.h>
#define NUM 40
#define SIZE 5
struct names 
{ 
    char first[NUM];
    char last[NUM]; 
};
void fillarray(struct names [], int);
void showarray(const struct names  ar[], int n);
int comp(const void *p1, const void *p2);

int main(void) {
    struct names staff[SIZE];
    fillarray(staff, SIZE);
    puts("Random list:");
    showarray(staff, SIZE);
    qsort(staff, SIZE, sizeof(struct names), comp);
    puts("\nSorted list by last name, then by first name:");
    showarray(staff, SIZE);
    return 0;
}
void fillarray(struct names ar[], int n)
{
    int index;
    for (int index = 0;index < n ;index++)
    {
        printf("Please enter your first name and last name:\n");
        scanf("%s %s", ar[index].first, ar[index].last);
    }
}

void showarray(const struct names ar[], int n)
{
    int index;

    for (int index = 0;index < n ;index++)
    {
        printf("%s %s%c", ar[index].first, ar[index].last, (index % 6 == 5) ? '\n' : '\t');
    }
    if ( index % 6 != 0)
    {
        putchar('\n');
    }
}

int comp(const void * p1, const void * p2) /* mandatory form */ 
{
    /* get right type of pointer */
    const struct names *ps1 = (const struct names *) p1; 
    const struct names *ps2 = (const struct names *) p2; 
    int res;

    res = strcmp(ps1->last, ps2->last); /* compare last names */
    if (res != 0)
    {
        return res;
    }
    else /* last names identical, so compare first names */ 
    {
        return strcmp(ps1->first, ps2->first);
    }
}

