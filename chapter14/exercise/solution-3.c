/*************************************************************************
	> File Name: solution-3.c
	> Author: 
	> Mail: 
	> Created Time: Sun Sep  8 07:23:33 2019
 ************************************************************************/

/* Revise the book-listing program in Listing 14.2 so that 
 * it prints the book descriptions in the order entered, 
 * then alphabetized by title, and then in order of increased value.
 */
#include <stdio.h>
#include <iso646.h>
#include <string.h>
#include <stdlib.h>
char *s_gets(char *st, int n);
int compare_by_value(const void *, const void *);
int compare_by_title(const void *, const void *);
#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS 100
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void) {
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS and s_gets(library[count].title, MAXTITL) != NULL and library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
        {
            continue;
        } 
        if (count < MAXBKS)
        {
            printf("Enter the next title.\n");
        }
    } 
    if (count > 0)
    {
        printf("Here is the list of book descriptions displayed in the order entered:\n");
        for (index = 0;index < count;index++)
        {
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
        }
        printf("Here is the list of book descriptions displayed alphabetized by title\n");
        qsort(library, count, sizeof(struct book), compare_by_title);
        for (index = 0;index < count;index++)
        {
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
        }
        printf("Here is the list of book titles displayed in order of increased value.\n");
        qsort(library, count, sizeof(struct book), compare_by_value);
        for (index = 0;index < count;index++)
        {
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
        }
    }
    else
    {
        printf("No books? Too bad.\n");
    }
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

int compare_by_value(const void *ptr1, const void *ptr2)
{
    return ((struct book *) ptr1)->value - ((struct book *) ptr2)->value;
}
int compare_by_title(const void *ptr1, const void *ptr2)
{
    return ((struct book *) ptr1)->title - ((struct book *) ptr2)->title;
}
