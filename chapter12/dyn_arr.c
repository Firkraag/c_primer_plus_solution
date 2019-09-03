/*************************************************************************
	> File Name: dyn_arr.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Jul 2019 03:01:07 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/* Listing 12.14 -- dynamically allocated array
 */
int main(void) {
    double *ptd;
    int max = 0;
    int number;
    int i = 0;

    puts("What is the maximum number of type double entries?");
    if (scanf("%d", &max) != 1)
    {
        puts("Number not correctly entered -- bye.");
        exit(EXIT_FAILURE);
    }
    ptd = (double *) malloc(max * sizeof(double));
    if ( ptd == NULL)
    {
        puts("Memory allocation failed. Goodbye.");
        exit(EXIT_FAILURE);
    }
    puts("Enter the values (q to quit):");
    while (i < max && scanf("%lf", &ptd[i++]) == 1)
    {
        ;
    }
    printf("Here are your %d entries:\n", number = i);
    for (i = 0; i < number; i++)
    {
        printf("%7.2f ", ptd[i]);
        if (i % 7 == 6)
        {
            putchar('\n');
        }
    }
    if (i % 7 != 0)
    {
        putchar('\n');
    }
    puts("Done.");
    free(ptd);

    return 0;
}
