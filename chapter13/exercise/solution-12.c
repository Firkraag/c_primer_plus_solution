/*************************************************************************
	> File Name: solution-12.c
	> Author: 
	> Mail: 
	> Created Time: Fri Sep  6 09:55:41 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#define ROW 20
#define COL 30
/* Create a text file consisting of 20 rows of 30 integers. 
 * The integers should be in the range 0–9 and be separated by spaces. 
 * The file is a digital representation of a picture, with the values 0 through 9 representing increasing levels of darkness. 
 * Write a program that reads the contents of the file into a 20-by-30 array of ints. 
 * In a crude approach toward converting this digital representation to a picture, 
 * have the program use the values in this array to initialize a 20-by-31 array of chars, 
 * with a 0 value corresponding to a space character, a 1 value to the period character, and so on, 
 * with each larger number represented by a character that occupies more space. 
 * For example, you might use # to represent 9. The last character (the 31st) in each row should be a null character, making it an array of 20 strings. 
 * Have the program display the resulting picture (that is, print the strings) and also store the result in a text file. 
 */


int main(void) {
    char array[ROW][COL + 1];
    FILE *fp = fopen("picture.txt", "r");
    for (int i = 0;i < ROW;i++)
    {
        int j = 0;
        while (j < COL)
        {
            int c;
            if ((c = fgetc(fp)) >= '0' and c <='9')
            {
                array[i][j++] = c;  
            }
        } 
        array[i][COL] = '\0';
    }
    FILE *output = fopen("picture.output", "w");
    for (int i = 0;i < ROW;i++)
    {
        for (int j = 0;j < COL;j++)
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
