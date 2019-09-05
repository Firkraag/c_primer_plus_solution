/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Sep 2019 09:31:42 PM CST
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1000

/* Programs using command-line arguments rely on the user's memory of how to
 * use them correctly. Rewrite the program in Listing 13.2 so that, instead
 * of using command-line arguments, it prompts the user for the required information
 */
int main(int argc, char *argv[]) {
    char src_name[LEN];
    char dest_name[LEN + 10];
    
    printf("Please enter your source file: ");
    scanf("%s", src_name);
    FILE *const in = fopen(src_name, "r");
    if (in == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", src_name);
        exit(EXIT_FAILURE);
    }
    snprintf(dest_name, LEN + 10, "%s.red", src_name);
    FILE *const out = fopen(dest_name, "w");
    if (out == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    int ch;
    int count = 0;
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
