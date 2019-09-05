/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Sep 2019 08:48:41 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 4096
#define SLEN 81

void append(FILE *source, FILE *dest);

/* Modify the program in Listing 13.5 so that it uses a command-line
 * interface instead of an interactive interface
 */
int main(int argc, char *argv[]) {
    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s output_file source_file [source_file...]", argv[0]);
        exit(EXIT_FAILURE);
    }
    int files = 0;
    const char *const file_app = argv[1];
    FILE *const fa = fopen(file_app, "a+");
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    for (int i = 2;i < argc;i++) 
    { 
        const char *const file_src = argv[i];
        FILE *fs;
        if (strcmp(file_src, file_app) == 0)
        {
            fputs("Can't append file to itself\n", stderr);
        }
        else if ((fs = fopen(file_src, "r")) == NULL)
        {
            fprintf(stderr, "Can't open %s\n", file_src);
        }
        else
        {
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                fputs("Can't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);
            if (ferror(fs) != 0)
            {
                fprintf(stderr, "Error in reading file %s.\n", file_src);
            }
            if (ferror(fa) != 0)
            {
                fprintf(stderr, "Error in writing file %s.\n", file_app);
            }
            fclose(fs);
            files++;
            printf("File %s appended.\n", file_src);
            puts("Next file (empty line to quit):");
        }
    } 
    printf("Done appending. %d files appended.\n", files);
    rewind(fa);
    printf("%s contents:\n", argv[0]);
    int ch;
    while ((ch = getc(fa)) != EOF)
    {
        putchar(ch);
    }
    puts("Done displaying.");
    fclose(fa);

    return 0;
}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
    {
        fwrite(temp, sizeof(char), bytes, dest);
    }
}
