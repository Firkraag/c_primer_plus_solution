/*************************************************************************
	> File Name: solution-1.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Sep 2019 02:50:06 AM CST
 ************************************************************************/
/* Modify Listing 17.2 so that it displays the movie list both in the original order and in reverse order. 
 * One approach is to modify the linked-list definition so that the list can be traversed in both directions. 
 * Another approach is to use recursion. 
 */
#include <stdio.h>
#include <iso646.h>
#include <string.h>
#include <stdlib.h>
#define TSIZE 45

struct film
{
    char title[TSIZE];
    int rating;
    struct film *next;
    struct film *prev;
};
char *s_gets(char *st, int n);

int main(void) 
{
    struct film *head = NULL;
    struct film *tail = NULL;
    struct film *prev, *current;
    char input[TSIZE];

    puts("Enter first movie title:");
    while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
    {
        current = (struct film *) malloc(sizeof(struct film));
        current->next = NULL;
        if (head == NULL)
        {
            head = current;
            current->prev = NULL;
        }
        else
        {
            prev->next = current;
            current->prev = prev;
        }
        tail = current;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>:");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
        {
            continue;
        } 
        puts("Enter next movie title (empty line to stop)");
        prev = current;
    } 
    if (head == NULL)
    {
        printf("No data entered. ");
    }
    else
    {
        printf("Here is the movie list:\n");
    }
    current = head;
    while (current != NULL )
    {
        printf("Movie: %s Rating: %d\n", current->title, current->rating);
        current = current->next;
    } 
    printf("Here is the movie list in reversed order:\n");
    current = tail;
    while (current != NULL)
    {
        printf("Movie: %s Rating: %d\n", current->title, current->rating);
        current = current->prev;
    } 
    current = head;
    while (current != NULL )
    {
        free(current);
        current = current->next;
    } 
    printf("Bye!\n");
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
