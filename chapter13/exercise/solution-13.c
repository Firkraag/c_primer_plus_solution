/*************************************************************************
	> File Name: solution-13.c
	> Author: 
	> Mail: 
	> Created Time: Fri Sep  6 10:33:16 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>

/* Do Programming Exercise 12, but use variable-length arrays (VLAs) instead of standard arrays.
 */
int main(void) {
    printf("What are the columns: ");
    int col;
    scanf("%d", &col);
    printf("What are the rows: ");
    int row;
    scanf("%d", &row);
    char array[row][col];
    FILE *fp = fopen("picture.txt", "r");
    for (int i = 0;i < row;i++)
    {
        int j = 0;
        while (j < col)
        {
            int c;
            if ((c = fgetc(fp)) >= '0' and c <='9')
            {
                array[i][j++] = c;  
            }
        } 
        array[i][col] = '\0';
    }
    FILE *output = fopen("picture.output", "w");
    for (int i = 0;i < row;i++)
    {
        for (int j = 0;j < col;j++)
        {
            char ch;
            switch (array[i][j])
            {
            case '0':
                ch = ' ';
                break;
            case '1':
                ch = '.';
                break;
            case '2':
                ch = '\'';
                break;
            case '3':
                ch = ':';
                break;
            case '4':
                ch = '-';
                break;
            case '5':
                ch = '*';
                break;
            case '6':
                ch = '=';
                break;
            case '7':
                ch = '!';
                break;
            case '8':
                ch = '%';
                break;
            case '9':
                ch = '#';
                break;
            default:
                fprintf(stderr, "Invalid %d-th character at row %d\n", j + 1, i + 1);
                exit(EXIT_FAILURE);
                break;
            } 
            putchar(ch);
            fputc(ch, output);
        }
        putchar('\n');
        fputc('\n', output);
    }
    fclose(output);
    fclose(fp);
}
