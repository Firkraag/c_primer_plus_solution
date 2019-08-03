/*************************************************************************
	> File Name: reducto.c
	> Author: 
	> Mail: 
	> Created Time: Sat Aug  3 07:57:37 2019
 ************************************************************************/

/* Listing 13.2 -- reduces your files by two-thirds
 */
#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1000

int main(int argc, char *argv[]) {
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;

   if (argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    snprintf(name, LEN, "%s%s", argv[1], ".red");
    if ((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    while ((ch = getc(in)) != EOF )
    {
        if (count++ % 3 == 0)
        {
            putc(ch, out);
        }
    } 
    if (fclose(in) != 0 || fclose(out) != 0)
    {
        fprintf(stderr, "Error in closing files\n");
    }
    return 0;
}
