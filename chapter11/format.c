/*************************************************************************
	> File Name: format.c
	> Author: 
	> Mail: 
	> Created Time: Wed Jul 24 17:58:09 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define MAX 20

char *s_gets(char *st, int n);
/* Listing 11.28 -- format a string
 */
int main(void) {
    char first[MAX];
    char last[MAX];
    char formal[2 * MAX + 10];
    double prize;

    puts("Enter your first name:");
    s_gets(first, MAX);
    puts("Enter your last name:");
    s_gets(last, MAX);
    puts("Enter your prize money:");
    scanf("%lf", &prize);
    sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
    puts(formal);

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
