/*************************************************************************
	> File Name: solution-3.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul  7 16:56:10 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

int main(void) {
    char ch;
    int column_width, line_size;
    void rectangle_print(char, int, int);

    printf("Plese enter the character to be printed, \n");
    printf("the first integer specifing the number of times that the character is to be printed on line,\n");
    printf("and the second integer specifing the number of lines that are to be printed:\n");
    scanf("%c %d %d", &ch, &column_width, &line_size);
    rectangle_print(ch, column_width, line_size);
}

/* Write a function that takes three arguments: a character and two integers. 
 * The character is to be printed. The first integer specifies the number of times that the character is to be printed on a line, 
 * and the second integer specifies the number of lines that are to be printed. 
 * Write a program that makes use of this function.
 */
void rectangle_print(char ch, int column_width, int line_size)
{

    for (int i = 0; i < line_size;i++)
    {
        for (int j = 0;j < column_width;j++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}
