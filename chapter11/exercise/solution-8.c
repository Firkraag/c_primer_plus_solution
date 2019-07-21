/*************************************************************************
	> File Name: solution-8.c
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Jul 2019 11:16:13 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define SIZE 1000

/* Write a function called string_in() that takes two string pointers as arguments. 
 * If the second string is contained in the first string, have the function return the address at which the contained string begins. 
 * For instance, string_in("hats", "at") would return the address of the a in hats . 
 * Otherwise, have the function return the null pointer. 
 * Test the function in a complete program that uses a loop to provide input values for feeding to the function. 
 */
int main(void) {
    char *string_in(const char *, const char *);
    char string1[SIZE], string2[SIZE]; 
    while (printf("Please enter two words:\n"), scanf("%s %s", string1, string2) == 2)
    {
        char *pos = string_in(string1, string2);
        if (pos)
        {
            size_t size = strlen(string2);
            size_t start_index = pos - string1;
            size_t end_index = start_index + size - 1;
            printf("substring of \"%s\" of index from %zd to %zd equals \"%s\"\n", string1, start_index, end_index, string2);
        }
        else 
        {
            printf("\"%s\" is not contained in \"%s\"\n", string2, string1);
        }
    }; 

    return 0;
}

char *string_in(const char *string, const char *substr)
{
    size_t size = strlen(substr);
    do {
        if (!strncmp(string, substr, size))
        {
            return (char *) string;
        }
    } while (*string++);
    return NULL;
}
