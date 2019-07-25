/*************************************************************************
	> File Name: test_fit.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 19 20:33:35 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>
char *s_gets(char *st, int n);
/* try the string-shrinking function
 */
int main(void) {
    void fit(char *, unsigned int);
    char mesg[] = "Things should be as simple as possible,"
        " but nto simpler.";
    
    puts(mesg);
    fit(mesg, 38);
    puts(mesg);
    puts("Let's look at some more of the string.");
    puts(mesg + 39);

    return 0;
}

void fit(char *string, unsigned int size)
{
    if (strlen(string) > size)
    {
        string[size] = '\0';
    }
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
