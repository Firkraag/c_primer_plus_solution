/*************************************************************************
	> File Name: flexmemb.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep  7 10:26:24 2019
 ************************************************************************/

/* Listing 14.12 -- flexiable array member (C99 feature)
 */
#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>

struct flex
{
    size_t count;
    double average;
    double scores[];
};

void showFlex(const struct flex *p);

int main(void) {
    struct flex *pf1, *pf2;
    int n = 5;
    int i;
    int tot = 0;

    pf1 = malloc(sizeof(struct flex) + n * sizeof(double));
    printf("%zd\n", sizeof(*pf1));
    pf1->count = n;
    for (i = 0;i < n;i++)
    {
        pf1->scores[i] = 20.0 - i;
        tot += pf1->scores[i];
    }
    pf1->average = tot / n;
    showFlex(pf1);

    n = 9;
    tot = 0;
    pf2 = malloc(sizeof(struct flex) + n * sizeof(double));
    pf2->count = n;
    for (i = 0;i < n;i++)
    {
        pf2->scores[i] = 20.0 - i / 2.0;
        tot += pf2->scores[i];
    }
    pf2->average = tot / n;
    showFlex(pf2);
    free(pf1);
    free(pf2);

    return 0;
}

void showFlex(const struct flex *p)
{
    int i;
    printf("Scores : ");
    for (i = 0;i < p->count;i++)
    {
        printf("%g ", p->scores[i]);
    }
    printf("\nAverage: %g\n", p->average);
}
