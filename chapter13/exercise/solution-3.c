/*************************************************************************
	> File Name: solution-3.c
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Sep 2019 08:26:41 PM CST
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 1024
/* Writing a file copy program that prompts the user to enter the name 
 * of a text file to act as the source file and the name of
 * an output file. The program should use the toupper()
 * function from ctype.h to convert all text to uppercase as it's written 
 * to the output file. Use standard I/O and the text mode.
 */
int main(void) {
    FILE *src, *dest;
    int ch;
    char src_filename[SIZE], dest_filename[SIZE];

    printf("Please enter the source filename: ");
    scanf("%s", src_filename);
    src = fopen(src_filename, "r");
    if (src == NULL)
    {
        fprintf(stderr, "Open file %s error", src_filename);
        exit(EXIT_FAILURE);
    }
    printf("Please enter the output filename: ");
    scanf("%s", dest_filename);
    dest = fopen(dest_filename, "w");
    if (src == NULL)
    {
        fprintf(stderr, "Open file %s error", dest_filename);
        exit(EXIT_FAILURE);
    }
    
    while ((ch = getc(src)) != EOF) 
    {
        putc(ch, dest);
    }; 
    fclose(src);
    fclose(dest);
    return 0;
}
