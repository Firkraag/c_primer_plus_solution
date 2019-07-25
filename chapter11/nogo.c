/*************************************************************************
	> File Name: nogo.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 23 14:41:00 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40

char *s_gets(char *st, int n);
/* Listing 11.20 -- will this work? */
int main(void) {
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (try != ANSWER)
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    } 
    puts("That's right!");

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
