/*************************************************************************
	> File Name: copy1new.c
	> Author: 
	> Mail: 
	> Created Time: Wed Jul 24 17:18:13 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>
#define SIZE 40
#define LIM 5

char *s_gets(char *st, int n);

/* Listing 11.25 -- strcpy() demo */
int main(void) {
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIM);
    while (i < LIM && s_gets(qwords[i], SIZE))
    {
        if (qwords[i][0] != 'q')
        {
            printf("%s doesn't begin with q!\n", qwords[i]);
        }
        else
        {
            /*strcpy(qwords[i], temp);*/
            i++;
        }
    } 
    puts("Here are the words accepted:");
    for (i = 0;i < LIM;i++)
    {
        puts(qwords[i]);
    }
    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
        {
            i++;
        } 
        if (st[i] == '\n')
        {
            st[i] = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            } 
        }
    }
    return ret_val;
}

