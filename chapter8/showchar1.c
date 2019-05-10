/*************************************************************************
	> File Name: showchar1.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  9 13:29:26 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* program with a BIG I/O problem
 */
int main(void) {
    void display(char, int, int);
    int ch;
    int rows, cols;
    printf("Enter a character and two integers:\n"); 
    while ((ch = getchar()) != '\n' )
    {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
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
