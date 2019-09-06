/*************************************************************************
	> File Name: solution-10.c
	> Author: 
	> Mail: 
	> Created Time: Fri Sep  6 08:09:03 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define SIZE 1000
#define MSG "Please enter a file position, " "I will print the part of the file starting at that position and proceed to the next newline character." "Let negative or nonnumeric input terminate the user-input loop.\n"
/* Write a program that opens a text file whose name is obtained interactively. 
 * Set up a loop that asks the user to enter a file position. 
 * The program then should print the part of the file starting at that position and proceed to the next newline character. 
 * Let negative or nonnumeric input terminate the user-input loop.
 */
int main(void) {
    char filename[SIZE];
    printf("Please enter a file name: ");
    scanf("%s", filename);
    FILE *const fp = fopen(filename, "r");
     
    int pos;
    while (printf(MSG),scanf("%d", &pos) == 1 and pos >= 0)
    {
        char str[SIZE];
        fseek(fp, pos, SEEK_SET);
        if (fgets(str, SIZE, fp) != NULL)
        {
            printf("%s", str);
        }
    } 
    fclose(fp);
}
