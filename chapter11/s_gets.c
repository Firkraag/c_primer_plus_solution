/*************************************************************************
	> File Name: s_gets.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 19 19:51:52 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>




int main(void) {
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
        if (st[i] == '\n' )
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
