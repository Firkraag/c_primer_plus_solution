/*************************************************************************
	> File Name: solution-10.c
	> Author: 
	> Mail: 
	> Created Time: Mon Sep  9 16:22:17 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
int get_first(void);
int showmenu(void);
int add(int, int);
int substract(int, int);
int multiply(int, int);
int divide(int, int);
typedef int (*INT_FP_INT_INT)(int, int);
INT_FP_INT_INT function_array[4] = {add, substract, multiply, divide};
int main(void) {
    int choice;
    int first, second;
    printf("Please enter two numbers:\n");
    scanf("%d %d", &first, &second);
    while (getchar() != '\n')
    {
    } 
    while ((choice = showmenu()) != 'q')
    {
        INT_FP_INT_INT fp;
        switch (choice)
        {
            case 'a':
                fp = function_array[0];
                break;
            case 'b':
                fp = function_array[1];
                break;
            case 'c':
                fp = function_array[2];
                break;
            case 'd':
                fp = function_array[3];
                break;
            default:
                fprintf(stderr, "Invalid choice, please enter a, b, c, d or q\n");
                break;
        } 
        printf("The result is %d\n", fp(first, second));
    } 
    return 0;
}
/* get first character of a fine and discard the rest, including newline character
 */
int get_first(void) {
    int result = getchar();
    int c = result;
    while (c != '\n' && c != EOF )
    {
        c = getchar();
    } 
    return result;
}

int showmenu(void)
{
    printf("Choose an function:\n");
    printf("a) add      b) substract\n");
    printf("c) multiply d) divide\n");
    printf("q) quit\n");
    return get_first();
}

int add(int x, int y)
{
    return x + y;
}
int substract(int x, int y)
{
    return x - y;
}
int multiply(int x, int y)
{
    return x * y;
}
int divide(int x, int y)
{
    return x / y;
}
