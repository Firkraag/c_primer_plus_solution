/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Tue Sep 10 11:24:55 2019
 ************************************************************************
 */
/* Write a program that reads two binary strings as command-line arguments 
 * and prints the results of applying the ~ operator to each number 
 * and the results of applying the &, |, and ^ operators to the pair. 
 * Show the results as binary strings. 
 * (If you don’t have a command-line environment available, have the program read the strings interactively.)
 */

#include <stdio.h>
#include <iso646.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define SIZE 10000
int binary_string_to_int(char *binary_string);
char *itobs(int n, char *ps);
int main(int argc, char *argv[]) {
    char binary_string[SIZE];
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s binary_string1 binary_string2\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    int num1 = binary_string_to_int(argv[1]);
    int num2 = binary_string_to_int(argv[2]);
    printf("The result of ~%s = %s\n", argv[1], itobs(~num1, binary_string));
    printf("The result of ~%s = %s\n", argv[2], itobs(~num2, binary_string));
    printf("The result of %s & %s is %s\n", argv[1], argv[2], itobs(num1 & num2, binary_string));
    printf("The result of %s | %s is %s\n", argv[1], argv[2], itobs(num1 | num2, binary_string));
    printf("The result of %s ^ %s is %s\n", argv[1], argv[2], itobs(num1 ^ num2, binary_string));

    return 0;
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
char *itobs(int n, char *ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1;i >= 0;i--, n >>= 1)
    {
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';

    return ps;
}
void show_bstr(const char *str)
{
    int i = 0;

    while (str[i])
    {
        putchar(str[i]);
        if (++i % 4 == 0 && str[i])
        {
            putchar(' ');
        }
    } 
}
