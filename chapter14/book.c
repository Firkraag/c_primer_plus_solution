/*************************************************************************
	> File Name: book.c
	> Author: 
	> Mail: 
	> Created Time: Fri Sep  6 20:54:39 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h>

/* Listing 14.1 -- one-book inventory
 */
char *s_gets(char *st, int n);
#define MAXTITL 41
#define MAXAUTL 31
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main(void) {
    struct book library;
    printf("Please enter the book title.\n");
    s_gets(library.title, MAXTITL);
    printf("Please enter the author.\n");
    s_gets(library.author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
    printf("Done.\n");
    return 0;
}

char * s_gets(char * st, int n) {
    char * ret_val; 
    char * find;
    ret_val = fgets(st, n, stdin); 
    if (ret_val)
    {
        find = strchr(st, '\n');  
        if (find)  
            *find = '\0'; 
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val; 
}

