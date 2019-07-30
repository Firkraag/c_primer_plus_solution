/*************************************************************************
	> File Name: solution-9.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 30 19:32:47 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h> 
#include <string.h>
#define BUFSIZE 1000
int main(void) {
    int words_number;
    char **words_array;
    char temp[BUFSIZE];

    printf("How many words do you wish to enter? ");
    scanf("%d", &words_number);
    words_array = (char **) malloc(sizeof(char *) * words_number);
    printf("Enter %d words now:\n", words_number);

    for (int i = 0;i < words_number;i++)
    {
        scanf("%s", temp);
        size_t length = strlen(temp);

        words_array[i] = (char *) malloc(sizeof(char) * (1 + length)); // the allocated size includes the null terminator.
        strcpy(words_array[i], temp);
    }

    for (int i = 0;i < words_number;i++)
    {
        printf("%s\n", words_array[i]);
    }
    
    return 0;
}
