/*************************************************************************
	> File Name: solution-1.c
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Sep 2019 06:50:21 PM CST
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>

#define SIZE 1024
/* Modify Listing 13.1 so that it solicits the user to enter the filename and reads the user's response instead of using command-line arguments.
 */
int main(void) {
    int ch;
    FILE *fp;
    unsigned long count = 0;
    char filename[SIZE];

    printf("Please enter the filename: ");
    scanf("%s", filename);
    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF )
    {
        putc(ch, stdout);
        count++;
    } 
    fclose(fp);
    printf("File %s has %lu characters\n", filename, count);

    return 0;
}
