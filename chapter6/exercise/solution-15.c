/*************************************************************************
	> File Name: solution-15.c
	> Author: 
	> Mail: 
	> Created Time: Sun 31 Mar 2019 12:50:22 AM CST
 ************************************************************************/

#include<stdio.h>
#define LINE_LENGTH 255
/*Write a program that reads in a line of input and then prints the line in reverse order.
You can store the input in an array of char; assume that the line is no longer than 255
characters. Recall that you can use scanf() with the %c specifier to read a character at
a time from input and that the newline character ( \n) is generated when you press the
Enter key.  
*/

int main(void) {
    char line[LINE_LENGTH];
    int i;
    char c;
    for (i = 0; i < LINE_LENGTH  &&  (scanf("%c", &c), c != '\n'); i++)
    {
        line[i] = c;
    }
    printf("%d\n", i);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", line[j]);
    }
}
