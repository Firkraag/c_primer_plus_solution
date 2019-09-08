/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Sun Sep  8 07:47:47 2019
 ************************************************************************/
/* Write a program that creates a structure template with two members according to the following criteria:
 * a. The first member is a social security number. 
 * The second member is a structure with three members. 
 * Its first member contains a first name, its second member contains a middle name, 
 * and its final member contains a last name. 
 * Create and initialize an array of five such structures. 
 * Have the program print the data in this format:
 * Dribble, Flossie M. –– 302039823
 * Only the initial letter of the middle name is printed, and a period is added. 
 * Neither the initial (of course) nor the period should be printed if the middle name member is empty.
 * Write a function to do the printing; pass the structure array to the function.
 * b. Modify part a. by passing the structure value instead of the address.
 */
#include <stdio.h>
#include <iso646.h>

struct person {
    char security[20];
    struct {
        char fname[20];
        char mname[20];
        char lname[20];
    };
};
void print_person(struct person *);
void print_person2(struct person);
int main(void) {
    struct person persons[5] = {
        {
            "302039823",
            {"foo", "bar", "foobar"}
        },
        {
            "302039823",
            {"foo", "bar", "foobar"}
        },
        {
            "302039823",
            {"foo", "bar", "foobar"}
        },
        {
            "302039823",
            {"foo", "", "foobar"}
        },
        {
            "302039823",
            {"foo", "bar", "foobar"}
        }
    };

    for (int i = 0;i < 5;i++)
    {
        print_person(&persons[i]);
    }
    putchar('\n');
    for (int i = 0;i < 5;i++)
    {
        print_person2(persons[i]);
    }
    return 0;
}

void print_person(struct person *ptr)
{
    if (ptr->mname[0])
    {
        printf("%s, %s %c. --- %s\n", ptr->fname, ptr->lname, ptr->mname[0], ptr->security);
    }
    else
    {
        printf("%s, %s --- %s\n", ptr->fname, ptr->lname, ptr->security);
    }
} 
void print_person2(struct person person)
{
    if (person.mname[0])
    {
        printf("%s, %s %c. --- %s\n", person.fname, person.lname, person.mname[0], person.security);
    }
    else
    {
        printf("%s, %s --- %s\n", person.fname, person.lname, person.security);
    }
} 
