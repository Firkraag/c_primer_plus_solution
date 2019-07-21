/*************************************************************************
	> File Name: solution-11.c
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Jul 2019 12:19:15 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 1000
#define STRING_NUMBER 10

char get_first(void);
int input_strings(int string_number, int string_size, char strings[string_number][string_size]);
void print_strings(char *strings[], int n);
void print_menu(void);
char get_first(void);
int compare_by_string_length(const char *string1, const char *string2);
int compare_by_first_word_length(const char *string1, const char *string2);
int find_string_first_word_length(const char *string);
void stsrt(char *strings[], int num, int (*compare)(const char *str1, const char *str2));

/* Write a program that reads in up to 10 strings or to EOF, whichever comes first. 
 * Have it offer the user a menu with five choices: 
 * print the original list of strings, 
 * print the strings in ASCII collating sequence, 
 * print the strings in order of increasing length, 
 * print the strings in order of the length of the first word in the string, 
 * and quit. 
 * Have the menu recycle until the user enters the quit request. 
 * The program, of course, should actually perform the promised tasks.
 */
int main(void) {
    char strings[STRING_NUMBER][SIZE];
    int string_number;
    char choice;
    
    string_number = input_strings(STRING_NUMBER, SIZE, strings);

    print_menu();
    while ((choice = get_first()) != 'q')
    {
        char *ptrs[string_number];
        for (int i = 0;i < string_number;i++) 
        {
            ptrs[i] = strings[i];
        } 
        switch (choice)
        {
            case 'a':
                print_strings(ptrs, string_number);
                break;
            case 'b':
                stsrt(ptrs, string_number, strcmp);
                print_strings(ptrs, string_number);
                break;
            case 'c': 
                stsrt(ptrs, string_number, compare_by_string_length);
                print_strings(ptrs, string_number);
                break;
            case 'd': 
                stsrt(ptrs, string_number, compare_by_first_word_length);
                print_strings(ptrs, string_number);
                break;
        }
        print_menu();
    }

    return 0;
}

int compare_by_string_length(const char *string1, const char *string2)
{
    return strlen(string1) - strlen(string2);
}
int compare_by_first_word_length(const char *string1, const char *string2)
{
    int length1 = find_string_first_word_length(string1), length2 = find_string_first_word_length(string2);
    return length1 - length2;
}


int find_string_first_word_length(const char *string)
{
    char c;
    int length = 0;
    while ((c = *string++) != '\0' && isspace(c))
    {
        ;
    }
    if (c == '\0')
    {
        return length;
    }
    else
    {
        length++;
    }
    while ((c = *string++) && !isspace(c))
    {
        length++;
    }
    return length; 
}

/* string-pointer-sorting function */
void stsrt(char *strings[], int num, int (*compare)(const char *str1, const char *str2))
{
    char *temp;
    int top, seek;
    for (top = 0; top < num-1; top++)
        for (seek = top + 1; seek < num; seek++)
            if ((* compare)(strings[top],strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}

void print_strings(char *strings[], int n)
{
    for (int i = 0;i < n;i++)
    { 
       printf("%s", strings[i]); 
    } 
}

void print_menu(void)
{
    printf("Now please one of the following choice:\n");
    printf("a. print the original list of strings\n");
    printf("b. print the strings in ASCII collating sequence\n");
    printf("c. print the strings in order of increasing length\n");
    printf("d. print the strings in order of the length of the first word in the string\n");
    printf("q. quit\n");
}

int input_strings(int string_number, int string_size, char strings[string_number][string_size])
{
    int i;
    printf("Please enter up to %d lines, using EOF to indicate end of input:\n", STRING_NUMBER);
    for (i = 0;i < string_number;i++) 
    { 
        if (!fgets(strings[i], string_size, stdin))
            break;
    } 
    return i;
}

char get_first(void) {
    int ch;

    ch = getchar();
    while (getchar() != '\n' )
    {
        continue;
    } 

    return ch;
}
