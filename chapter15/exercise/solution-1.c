/*************************************************************************
	> File Name: solution-1.c
	> Author: 
	> Mail: 
	> Created Time: Tue Sep 10 11:11:57 2019
 ************************************************************************/
/* Write a function that converts a binary string to a numeric value. 
 * That is, if you have
 *      char * pbin = "01001001";
 * you can pass pbin as an argument to the function and have the function return an int value of 25.
 */
#include <stdio.h>
#include <iso646.h>
#include <string.h>
#define SIZE 1000
int binary_string_to_int(char *binary_string);

int main(void) {
    char binary_string[SIZE];
    while (printf("Please enter a binary string: \n"),scanf("%s", binary_string) == 1)
    {
        printf("Binary %s = %d\n", binary_string, binary_string_to_int(binary_string));
    } 
}

int binary_string_to_int(char *binary_string)
{
    int result = 0;
    for (int i = 0;i < strlen(binary_string);i++)
    {
        result = result * 2 + (binary_string[i] - '0');
    }
    return result;
}
