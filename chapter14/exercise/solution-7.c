/*************************************************************************
	> File Name: solution-7.c
	> Author: 
	> Mail: 
	> Created Time: Sun Sep  8 20:50:28 2019
 ************************************************************************/

/* Modify Listing 14.14 so that as each record is read from the file and shown to you, 
 * you are given the chance to delete the record or to modify its contents. 
 * If you delete the record, use the vacated array position for the next record to be read. 
 * To allow changing the existing contents, you’ll need to use the "r+b" mode instead of the "a+b" mode, 
 * and you’ll have to pay more attention to positioning the file pointer so that appended records don’t overwrite existing records. 
 * It’s simplest to make all changes in the data stored in program memory and then write the final set of information to the file. 
 * One approach to keeping track is to add a member to the book structure that indicates whether it is to be deleted.
 */
#include <stdio.h>
#include <iso646.h>
#include <string.h>
#include <stdlib.h>

char *s_gets(char *st, int n);
char showmenu(void);
#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS 10
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main(void) {
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE *pbooks;
    int size = sizeof(struct book);
    if ((pbooks = fopen("book.dat", "a+b")) == NULL)
    {
        fputs("Can't open book.dat file\n.", stderr);
        exit(EXIT_FAILURE);
    }
    rewind(pbooks);
    while (count < MAXBKS and fread(&library[count], size,  1, pbooks) == 1)
    {
        if (count == 0)
        {
            puts("Current contents of book.dat:");
        }
        printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
        switch (showmenu())
        {
            case 'n': /* do nothing */
                count++;
                break;
            case 'm':

                break;
            case 'd':
                break;
            default:
                fprintf(stderr, "Invalid choice , please enter 'n' to do nothing, 'm' to modify the record, 'd' to delete the record");
                exit(EXIT_FAILURE);
                break;
        } 
    } 
    filecount = count;
    if (count == MAXBKS)
    {
        fputs("The book.dat file is full.\n", stderr);
        exit(2);
    }
    puts("Please add new book titles.");
    puts("Press [enter] at the start of a line to stop.");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        puts("Now enter the author.");
        s_gets(library[count].author, MAXAUTL);
        puts("Now enter the value.");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n' )
        {
            continue;
        } 
        if (count < MAXBKS)
        {
            puts("Enter the next title.");
        }
    } 
    if (count > 0)
    {
        puts("Here is the list of your books:");
        for (index = 0;index < count;index++)
        {
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
        }
        fwrite(&library[filecount], size, count - filecount, pbooks);
    }
    else
    {
        puts("No books? Too bad.\n");
    }
    puts("Bye.\n");
    fclose(pbooks);
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

