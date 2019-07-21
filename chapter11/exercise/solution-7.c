/*************************************************************************
	> File Name: solution-7.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 21 20:23:50 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define SIZE 1000



/* The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1, truncating s2 or padding it with extra null characters as necessary. The target string may not be null-terminated if the length of s2 is n or more. The function returns s1. Write your own version of this function; call it mystrncpy(). Test the function in a complete program that uses a loop to provide input values for feeding to the function.
 */
int main(void) {
    char *mystrncpy(char *, const char *, int);
    char source[SIZE];
    char dest[SIZE];
    
    while (printf("Please enter a line:\n"),fgets(source, SIZE, stdin))
    {
        mystrncpy(dest, source, 10);
        printf("The source is: %s", source);
        printf("The dest is: %s", dest);
    } 

    return 0;
}

char *mystrncpy(char *s1, const char *s2, int n)
{
    int i = 0;

    while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    } 
    while (i < n)
    {
        s1[i++] = '\0';
    } 
    return s1;
}
