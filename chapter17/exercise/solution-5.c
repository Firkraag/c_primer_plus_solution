/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Mon Sep 16 13:28:19 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>
#include "stack.h"
#define COL 1000
#define ROW 80
/* Write a program that lets you input a string. 
 * The program then should push the characters of the string onto a stack, one by one (see review question 5), 
 * and then pop the characters from the stack and display them. This results in displaying the string in reverse order.
 */
char * s_gets(char * st, int n);

int main(void) {
    char lines[ROW][COL];
    int row = 0;
    Stack stack;

    InitializeStack(&stack);

    while (printf("Please enter a line, enter empty line to quit:\n"), row < ROW && s_gets(lines[row], COL) != NULL && lines[row][0] != '\0')
    {
       StackPush((char *) lines[row], &stack);
       row++;
    } 
    while (!StackIsEmpty(&stack))
    {
        Item item;
        StackPop(&item, &stack);
        printf("%s\n", item);
    } 
    return 0;
}
char * s_gets(char * st, int n) {
    char * ret_val; 
    char * find;
    ret_val = fgets(st, n, stdin); 
    if (ret_val)
    {
        find = strchr(st, '\n');  
        if (find)  
            *find = '\0'; 
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val; 
}
