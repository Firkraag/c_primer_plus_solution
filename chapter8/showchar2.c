/*************************************************************************
	> File Name: showchar2.c
	> Author: 
	> Mail: 
	> Created Time: Fri May 10 08:36:52 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* prints characters in rows and columns
 */
int main(void) {
    void display(char, int, int);
    int ch;
    int rows, cols;

    printf("Enter a character and two integers:\n"); 
    while ((ch = getchar()) != '\n' )
    {
        if (scanf("%d %d", &rows, &cols) != 2)
        {
            break;
        }
        display(ch, rows, cols);
        while (getchar() != '\n' )
        {
            continue;
        } 
        printf("Enter another character and two integers;\n"); 
        printf("Enter a newline to quit.\n"); 
    } 
    printf("Bye.\n"); 

    return 0;
}

void display(char ch, int lines, int width) {
    int row, col;

    for (row = 1 ; row <= lines; row++)
    {
        for (col = 1 ; col <= width ; col++)
        {
            putchar(ch);
        } 
        putchar('\n');
    } 
}
