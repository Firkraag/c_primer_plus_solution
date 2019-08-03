/*************************************************************************
	> File Name: addaword.c
	> Author: 
	> Mail: 
	> Created Time: Sat Aug  3 08:29:21 2019
 ************************************************************************/

/* Listing 13.3 -- uses fprintf(), fscanf(), and rewind()
 */
#include <stdio.h>
#include <iso646.h>
#include <string.h>
#include <stdlib.h>

#define MAX 41

int main(void) {
    FILE *fp;
    char words[MAX];

    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"word\" file.\n");
        exit(EXIT_FAILURE);
    }
    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
    {
        fprintf(fp, "%s\n", words);
    } 
    puts("File contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1 )
    {
        puts(words);
    } 
    puts("Done!");
    if (fclose(fp) != 1)
    {
        fprintf(stderr, "Error closing file\n");
    }

    return 0;
}
