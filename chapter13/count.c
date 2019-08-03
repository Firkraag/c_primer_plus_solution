/*************************************************************************
	> File Name: count.c
	> Author: 
	> Mail: 
	> Created Time: Wed Jul 31 08:20:43 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>

/* count.c -- using standard I/O
 */
int main(int argc, char *argv[]) {
    int ch;
    FILE *fp;
    unsigned long count = 0;

    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF )
    {
        putc(ch, stdout);
        count++;
    } 
    fclose(fp);
    printf("File %s has %lu characters\n", argv[1], count);

    return 0;
}
