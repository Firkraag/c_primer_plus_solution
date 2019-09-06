/*************************************************************************
	> File Name: solution-14.c
	> Author: 
	> Mail: 
	> Created Time: Fri Sep  6 10:39:09 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#define NEIGHBOR_DIFF(neighbor) if (abs((neighbor) - self) > 1) { neighbor_sum += neighbor; neighbor_number++; } else { return self; }


/* Digital images, particularly those radioed back from spacecraft, may have glitches. 
 * Add a de-glitching function to programming exercise 12. 
 * It should compare each value to its immediate neighbors to the left and right, above and below. 
 * If the value differs by more than 1 from each of its neighbors, replace the value with the average of the neighboring values. 
 * You should round the average to the nearest integer value. 
 * Note that the points along the boundaries have fewer than four neighbors, so they require special handling.
 */
int main(void) {
    int deglitching(int i, int j, int row, int col, char array[row][col]);
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
            char ch = deglitching(i, j, row, col, array);
            switch (ch)
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

int deglitching(int i, int j, int row, int col, char array[row][col])
{
    int neighbor_number = 0;
    int neighbor_sum = 0;
    int neighbor;
    int self = array[i][j];
    if (i != 0)
    {
        NEIGHBOR_DIFF(array[i - 1][j])
    }
    if (i != row - 1)
    {
        NEIGHBOR_DIFF(array[i + 1][j])
    }
    if (j != 0)
    {
        NEIGHBOR_DIFF(array[i][j - 1])
    }
    if (j != col - 1)
    {
        NEIGHBOR_DIFF(array[i][j + 1])
    }

    return neighbor_sum / neighbor_number;
}
