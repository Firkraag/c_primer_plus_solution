/*************************************************************************
	> File Name: solution-15.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 23 08:12:02 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <ctype.h>
#define SIZE 1000
int atoi(const char *) ;
int _atoi(const char *, int) ;
/* Use the character classification functions to prepare an implementation of atoi(); 
 * have this version return the value of 0 if the input string is not a pure number.
 */

int main(void) {
    char string[SIZE];

    while (scanf("%s", string) == 1)
    {
        printf("the result of atoi(\"%s\") is %d\n", string, atoi(string));
    } 
}

int atoi(const char *string)
{
    return _atoi(string, 0);
}

int _atoi(const char *string, int result)
{
    if (!*string)
        return result;
    if (!isdigit(*string))
    {
        return 0;
    }
    return _atoi(string + 1, result * 10 + (*string - '0'));
}

