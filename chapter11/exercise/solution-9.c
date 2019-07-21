/*************************************************************************
	> File Name: solution-9.c
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Jul 2019 11:58:12 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define SIZE 1000

/* Write a function that replaces the contents of a string with the string reversed. 
 * Test the function in a complete program that uses a loop to provide input values for feeding to the function.
 */
int main(void) {
    void reverse(char *);
    char str[SIZE];
    while (printf("Please enter a word: "), scanf("%s", str) == 1) 
    {
        printf("Original string is \"%s\"\n", str);
        reverse(str);
        printf("Reversed string is \"%s\"\n", str);
    }; 

    return 0;
}

void reverse(char *str)
{
    size_t end = strlen(str);
    size_t start = 1;

    while (start < end) 
    {
        char tmp = str[start - 1];
        str[start - 1] = str[end - 1];
        str[end - 1] = tmp;
        start++;
        end--;
    }; 
}
