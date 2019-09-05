/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Sep 2019 08:00:14 PM CST
 ************************************************************************/

#include <stdio.h>
/* Write a file-copy program that takes the original filename
 * and the copy file from the command line.
 * Use standard I/O and the binary mode, if possible.
 */
int main(int argc, char *argv[]) {
    FILE *src = fopen(argv[1], "rb");
    FILE *dest = fopen(argv[2], "wb");
    int ch;
    while ((ch = getc(src)) != EOF)
    {
        putc(ch, dest);
    }
    fclose(src);
    fclose(dest);
    return 0;
}
