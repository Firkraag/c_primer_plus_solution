/*************************************************************************
	> File Name: solution-7.c
	> Author: 
	> Mail: 
	> Created Time: Mon Sep 16 14:24:44 2019
 ************************************************************************/
/* Write a program that opens and reads a text file and records how many times each word occurs in the file. 
 * Use a binary search tree modified to store both a word and the number of times it occurs. After the program has read the file, it should offer a menu with three choices. 
 * The first is to list all the words along with the number of occurrences. 
 * The second is to let you enter a word, with the program reporting how many times the word occurred in the file. 
 * The third choice is to quit.
 */
#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include <ctype.h>
#include "tree.h"

bool get_word(FILE *, char *, int);
int showmenu(void);
void showitem(Item pi);
int main(void) {
    FILE *file = fopen("solution-7.c", "r");
    char temp[SLEN];
    Tree tree;
     
    InitializeTree(&tree);
    while (get_word(file, temp, SLEN))
    {
        Item item;
        Item *pi;
        strcpy(item.word, temp);
        item.count = 1;
        if ((pi = GetItem(&item, &tree)) != NULL)
        {
            pi->count++;
        }
        else
        {
            AddItem(&item, &tree);
        }
    }
    fclose(file);
    int choice;
    Item item;
    Item *pi;
    while ((choice = showmenu()) != 'q')
    {
        switch (choice)
        {
            case 'l':
                Traverse(&tree, showitem);
                break;
            case 's':
                printf("Please enter a word: ");
                scanf("%s", temp);
                while (getchar() != '\n')
                {
                    continue;
                } 
                strcpy(item.word, temp);
                if ((pi = GetItem(&item, &tree)) != NULL)
                {
                    printf("word '%s' occured %d times in file\n", pi->word, pi->count);
                }
                else
                {
                    fprintf(stderr, "word '%s' not found in file\n", temp);
                }
                break;
            default:
                fprintf(stderr, "Invalid choice, please enter q, l, s\n");
                exit(EXIT_FAILURE);
                break;
        } 
    } 
    DeleteAll(&tree);
}
bool get_word(FILE *fp, char *str, int n)
{
    int ch;
    int i = 0;
    while ((ch = fgetc(fp)) != EOF && !isalnum(ch))
    {
        continue;
    }
    if (ch == EOF)
    {
        return false;
    }
    do
    {
        str[i] = ch;
    } while (++i < n && (ch = fgetc(fp)) != EOF && isalnum(ch)); 
    str[i] = '\0';
    return true;
}

int showmenu(void)
{
    char choice;
    printf("Please enter one of the following choice:\n");
    printf("l) list all words and counts    s) select a word and show its count\n");
    printf("q) quit\n");
    scanf("%c", &choice);
    while (getchar() != '\n' )
    {
        continue;
    } 
    return choice;
}
void showitem(Item pi)
{
    printf("Word: %s\tCounts:%d\n", pi.word, pi.count);
}

