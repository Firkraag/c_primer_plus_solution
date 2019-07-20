/*************************************************************************
	> File Name: fgets3.c
	> Author: 
	> Mail: 
	> Created Time: Thu Jul 18 13:59:47 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  STLEN 10

/* using fgets()
 */
int main(void) {
    char words[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n' )
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0' )
        {
            i++;
        } 
        if (words[i] == '\n')
        {
            words[i] = '\0';
        }
        else
        {
            while (getchar() != '\n' )
            {
                continue;
            } 
        }
        puts(words);
    } 
    puts("done");
    return 0;
}
