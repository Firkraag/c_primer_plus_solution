/*************************************************************************
	> File Name: solution-9.c
	> Author: 
	> Mail: 
	> Created Time: Fri Sep  6 07:15:02 2019
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000


/* Modify the program in Listing 13.3 so that each word is numbered according to
 * the order in which it was added to the list, starting with 1. Make sure that, 
 * when the program is run a second time, new word numbering resumes where the previous
 * numbering left off
 */
int main(void) {
    FILE *fp;
    char words[MAX];
    int index = 1;
    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    rewind(fp);
    while (fgets(words, MAX,  fp) != NULL)
    {
        index++;
    } 
    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
    {
        fprintf(fp, "%d %s\n", index++, words);
    } 
    puts("File contents:");
    rewind(fp);
    while (fgets(words, MAX, fp) != NULL)
    {
        fputs(words, stdout);
    } 

    puts("Done!");
    if (fclose(fp) != 0)
    {
        fprintf(stderr, "Error closing file\n");
    }

    return 0;
}
