/*************************************************************************
	> File Name: solution-8.c
	> Author: 
	> Mail: 
	> Created Time: Mon Sep 16 15:54:20 2019
 ************************************************************************/
/* Modify the Pet Club program so that all pets with the same name are stored in a list in the same node. 
 * When the user chooses to find a pet, the program should request the pet name and then list all pets (along with their kinds) having that name.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "tree.h"

char menu(void);
void addpet(Tree *pt);
void droppet(Tree *pt);
void showpets(const Tree *pt);
void findpet(const Tree *pt);
void printitem(Item item);
void uppercase(char *str);
char *s_gets(char *st, int n);

int main(void) {
    Tree pets;
    char choice;

    InitializeTree(&pets);
    while ((choice = menu()) != 'q')
    {
        switch(choice)
        {
            case 'a':
                addpet(&pets);
                break;
            case 'l':
                showpets(&pets);
                break;
            case 'f':
                findpet(&pets);
                break;
            case 'n':
                printf("%d pets in club\n", TreeItemCount(&pets));
                break;
            case 'd':
                droppet(&pets);
                break;
            default:
                puts("Switching error");
                break;
        }
    }
    DeleteAll(&pets);
    puts("Bye.");

    return 0;
}

char menu(void)
{
    int ch;
    puts("Nerfville Pet Club Membership Program");
    puts("Enter the letter corresponding to your choice:");
    puts("a) add a pet      l) show list of pets");
    puts("n) number of pets         f) find pets");
    puts("d) delete a pet       q) quit");
    while ((ch = getchar()) != EOF)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        ch = tolower(ch);
        if ( strchr("alrfndq", ch) == NULL)
        {
            puts("Please enter a a, l, f, n, d, or q:");
        }
        else
        {
            break;
        }
    }
    if ( ch == EOF)
    {
        ch = 'q';
    }
    return ch;
}

void addpet(Tree *pt)
{
    Pet temp;
    Item *pi;
    Item item;
    if ( TreeIsFull(pt))
    {
        puts("No room in the club!");
    }
    else
    {
        puts("Please enter name of pet:");
        s_gets(temp.petname, SLEN);
        puts("Please enter pet kind:");
        s_gets(temp.petkind, SLEN);
        uppercase(temp.petname);
        uppercase(temp.petkind);
        item.pets[0] = temp;
        item.number = 1;
        if ((pi = GetItem(&item, pt)) == NULL)
        {
            AddItem(&item, pt);
        }
        else
        {
            pi->pets[pi->number] = temp;
            pi->number++;
        }
    }
}

void showpets(const Tree *pt)
{
    if ( TreeIsEmpty(pt))
    {
        puts("No entires");
    }
    else
    {
        Traverse(pt, printitem);
    }
}

void printitem(Item item)
{
    for (int i = 0;i < item.number ;i++)
    {
        printf("Pet: %-19s Kind: %-19s\n", item.pets[i].petname, item.pets[i].petkind);
    }
}

void findpet(const Tree *pt)
{
    Pet pet;
    
    if ( TreeIsEmpty(pt))
    {
        puts("No entries!");
        return;
    }

    puts("Please enter name of pet you wish to find:");
    s_gets(pet.petname, SLEN);
    uppercase(pet.petname);
    Item item = {.number = 1};
    item.pets[0] = pet;
    item.number = 1;
    Item *pi; 
    if ((pi = GetItem(&item, pt)) == NULL)
    {
        printf("Pets not found for given pet name\n");
    }
    printitem(*pi);
}

void droppet(Tree *pt)
{
    Pet pet;

    if ( TreeIsEmpty(pt))
    {
        puts("No entries!");
        return;
    }

    puts("Please enter name of pet you wish to delete:");
    s_gets(pet.petname, SLEN);
    puts("Please enter pet kind:");
    s_gets(pet.petkind,SLEN);
    uppercase(pet.petname);
    uppercase(pet.petkind);
    printf("%s the %s ", pet.petname, pet.petkind);
    Item item;
    item.pets[0] = pet;
    item.number = 1;
    if ( DeleteItem(&item, pt))
    {
        printf("is dropped from the club.\n");
    }
    else
    {
        printf("is not a member.\n");
    }
}

void uppercase(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
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
