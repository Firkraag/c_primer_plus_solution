/*************************************************************************
	> File Name: mod_str.c
	> Author: 
	> Mail: 
	> Created Time: Thu Jul 25 20:10:02 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81

void ToUpper(char *);
int PunctCount(const char *);

/* Listing 11.30 -- modifies a string
 */
int main(void) {
    char line[LIMIT];
    char *find;

    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n');
    if (find)
    {
        *find = '\0';
    }
    ToUpper(line);
    puts(line);
    printf("That line has %d punctation characters.\n", PunctCount(line));

    return 0;
}

void ToUpper(char *str)
{
    while (*str )
    {
        *str = toupper(*str);
        str++;
    } 
}

int PunctCount(const char *str)
{
    int ct = 0;

    while (*str)
    {
        if (ispunct(*str))
        {
            ct++;
        }
        str++;
    } 
    return ct;
}
