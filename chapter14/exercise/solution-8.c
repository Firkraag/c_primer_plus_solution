/*************************************************************************
	> File Name: solution-8.c
	> Author: 
	> Mail: 
	> Created Time: Sun Sep  8 20:50:15 2019
 ************************************************************************/

/* The Colossus Airlines fleet consists of one plane with a seating capacity of 12. 
 * It makes one flight daily. Write a seating reservation program with the following features:
 * a. The program uses an array of 12 structures. Each structure should hold a seat identification number, 
 * a marker that indicates whether the seat is assigned, the last name of the seat holder, and the first name of the seat holder.
 *
 * b. The program displays the following menu:
 * To choose a function, enter its letter label:
 * a) Show number of empty seats
 * b) Show list of empty seats
 * c) Show alphabetical list of seats
 * d) Assign a customer to a seat assignment e) Delete a seat assignment
 * f) Quit

 *
 */
#include <stdio.h>
#include <iso646.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define NAME_SIZE 20
#define SEAT_NUMBER 12
struct seat_info
{
    int number;
    bool assigned;
    char holder_fname[NAME_SIZE];
    char holder_lname[NAME_SIZE];
};

int show_menu(void);
int get_first(void);
void execute_choice(int choice, struct seat_info [], int n);
void show_empty_seats_number(struct seat_info seats_info[], int n);
void show_empty_seats_list(struct seat_info seats_info[], int n);
void show_alphabetical_seats_list(struct seat_info seats_info[], int n);
void assign_seat(struct seat_info seats_info[], int n, char *fname, char *lname, int seat_number);
void deassign_seat(struct seat_info seats_info[], int n, int seat_number);
int compare_by_first_name(const void *, const void *);


int main(void) {
    struct seat_info seats_info[SEAT_NUMBER];
    FILE *fp = fopen("seats_info.dat", "rb");
    // if the seats info data file does not exist, fill seats_info with some random data
    if (fp == NULL)
    {
        for (int i = 0;i < SEAT_NUMBER ;i++)
        {
            seats_info[i].number = 20 - i;
            seats_info[i].assigned = false;
            seats_info[i].holder_fname[0] = '\0';
            seats_info[i].holder_lname[0] = '\0';
        }
    }
    // if the seats info data file does exist, fill seats_info with data read from file
    else
    {
        fread(seats_info, sizeof(struct seat_info), SEAT_NUMBER, fp);
        fclose(fp);
    }
    int choice;
    while ((choice = show_menu()) != 'f')
    {
        execute_choice(choice, seats_info, SEAT_NUMBER);
    }
    fp = fopen("seats_info.dat", "wb");
    fwrite(seats_info, sizeof(struct seat_info), SEAT_NUMBER, fp);
    fclose(fp);
    return 0;
}

int show_menu(void)
{
    printf("To choose a function, enter its letter label:\n");
    printf("a) Show number of empty seats\n");
    printf("b) Show list of empty seats\n");
    printf("c) Show alphabetical list of seats\n");
    printf("d) Assign a customer to a seat assignment\n"); 
    printf("e) Delete a seat assignment\n");
    printf("f) Quit\n");
    return get_first();
}
/* get first character of a fine and discard the rest, including newline character
 */
int get_first(void) {
    int result = getchar();
    int c = result;
    while (c != '\n' && c != EOF )
    {
        c = getchar();
    } 
    return result;
}

void execute_choice(int choice, struct seat_info seats_info[], int n)
{
    char first_name[NAME_SIZE];
    char last_name[NAME_SIZE];
    int seat_number;

    switch (choice)
    {
        case 'a':
            show_empty_seats_number(seats_info, n);
            break;
        case 'b':
            show_empty_seats_list(seats_info, n);
            break;
        case 'c':
            show_alphabetical_seats_list(seats_info, n);
            break;
        case 'd':
            printf("Assign a seat by entering your first name, last name and the seat number: \n");
            scanf("%s %s %d", first_name, last_name, &seat_number);
            while (getchar() != '\n')
            {
                continue;
            } 
            assign_seat(seats_info, n, first_name, last_name, seat_number);
            break;
        case 'e':
            printf("Cancel assignment to a seat by entering the seat number: \n");
            scanf("%d", &seat_number);
            while (getchar() != '\n')
            {
                continue;
            } 
            deassign_seat(seats_info, n, seat_number);
            break;
        default:
            fprintf(stderr, "Invalid choice, please enter a, b, c, d, e, f\n");
            exit(EXIT_FAILURE);
            break;
    } 
}

void show_empty_seats_number(struct seat_info seats_info[], int n)
{
    int count = 0;
    for (int i = 0;i < n;i++)
    {
        if (!seats_info[i].assigned)
        {
            count++;
        }
    }
    printf("Number of empty seats is %d\n", count);
}

void show_empty_seats_list(struct seat_info seats_info[], int n)
{
    for (int i = 0;i < n;i++)
    {
        if (!seats_info[i].assigned)
        {
            printf("Seat %d is unassigned\n", seats_info[i].number);
        }
    }
}
/* show seats ordered by first name
 */
void show_alphabetical_seats_list(struct seat_info seats_info[], int n)
{
    struct seat_info *ptr_array[n];

    for (int i = 0;i < n ;i++)
    {
        ptr_array[i] = &seats_info[i];
    }
    qsort(ptr_array, n, sizeof(struct seat_info *), compare_by_first_name);
    for (int i = 0;i < n ;i++)
    {
        if (ptr_array[i]->assigned)
        {
            printf("Seat %d is assigned to %s %s\n", ptr_array[i]->number, ptr_array[i]->holder_fname, ptr_array[i]->holder_lname);
        }
        else
        {
            printf("Seat %d is not assigned\n", ptr_array[i]->number);
        }
    }
}

int compare_by_first_name(const void *ptr1, const void *ptr2)
{
    struct seat_info *seat_info_ptr1 = *((struct seat_info **) ptr1);
    struct seat_info *seat_info_ptr2 = *((struct seat_info **) ptr2);
    return strcmp(seat_info_ptr1->holder_fname, seat_info_ptr2->holder_lname);
}


void assign_seat(struct seat_info seats_info[], int n, char *fname, char *lname, int seat_number)
{
    for (int i = 0;i < n ;i++)
    {
        if (seats_info[i].number == seat_number)
        {
            if (seats_info[i].assigned )
            {
                fprintf(stderr, "Seat %d is already assigned to another customer\n", seats_info->number);
            }
            else
            {
                seats_info[i].assigned = true; 
                strcpy(seats_info[i].holder_fname, fname);
                strcpy(seats_info[i].holder_lname, lname);
            }
            return;
        }
    }
    fprintf(stderr, "Seat %d not found.\n", seat_number);
}
void deassign_seat(struct seat_info seats_info[], int n, int seat_number)
{
    for (int i = 0;i < n ;i++)
    {
        if (seats_info[i].number == seat_number)
        {
           seats_info[i].assigned = false; 
           return;
        }
    }
    fprintf(stderr, "Seat %d not found.\n", seat_number);
}
