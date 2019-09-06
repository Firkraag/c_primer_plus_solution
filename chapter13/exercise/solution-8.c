/*************************************************************************
	> File Name: solution-8.c
	> Author: 
	> Mail: 
	> Created Time: Fri Sep  6 06:52:01 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* Writing a program that takes as command-line arguments a character and zero or more filenames.
 * If no arguments follow the character, have the program read the standard input.
 * Otherwise, have it open each file in turn and report how many times the character appears in each file.
 * The filename and the character itself should be reported along with the count. Include error-checking to 
 * see whether the number of arguments is correct and whether the files can be opened.
 * If a file can't be opened, have the program report that fact and go on to the next file.
 */

int main(int argc, char *argv[]) {
    void count_char_appearance(const char ch, FILE *const stream, const char *const filename);
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s CHAR STDIN|FILENAME...\n", argv[0]);
        return 0;
    }
    else if (argc == 2)
    {
        count_char_appearance(argv[1][0], stdin, "stdin");
        return 0;
    }
    else
    {
        char ch = argv[1][0];
        for (int i = 2;i < argc;i++)
        {
            char *filename = argv[i];
            FILE *fp = fopen(filename, "r");
            if (fp == NULL)
            {
                fprintf(stderr, "Open file %s error\n", filename);
                continue;
            }
            count_char_appearance(ch, fp, filename);
            fclose(fp);
        }
        return 0;
    }

    return 0;
}

void count_char_appearance(const char ch, FILE *const stream, const char *const filename) 
{
    int c;
    int count = 0;
    while ((c = fgetc(stream)) != EOF )
    {
        if (c == ch)
        {
            count++;
        }
    } 
    printf("%s: %d\n", filename, count);
}
