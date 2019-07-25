/*************************************************************************
	> File Name: starsrch.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 23 20:53:06 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>
#define LISTSIZE 6

/* Listing 11.24 -- use strncmp()
 */
int main(void) {
    const char *list[LISTSIZE] = 
    {
        "astronomy", "astounding", "astrophysics", "ostracize", "asterism", "astrophobia"
    };
    int count = 0;
    int i;

    for (i = 0;i < LISTSIZE;i++)
    {
        if (strncmp(list[i], "astro", 5) == 0)
        {
            printf("Found: %s\n", list[i]);
            count++;
        }
    }
    printf("The list contained %d words beginning"
            " with astro.\n", count);
    return 0;
}
