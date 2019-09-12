/*************************************************************************
	> File Name: solution-9.c
	> Author: 
	> Mail: 
	> Created Time: Mon Sep  9 15:02:27 2019
 ************************************************************************/

/* Colossus Airlines (from exercise 8) acquires a second plane (same capacity) and
 * expands to its service to four flights daily (Flights 102, 311, 444, 519). Expand
 * the program to handle four flights. Have a top-level menu that offers a choice of flights
 * and the option to quit. Selecting a particular flight should then bring up a menu similar to
 * that of exercise 8. However, one new item should be added: confirming a seat assignment.
 * Also, the quit choice should be replaced with the choice of exiting to the top-level menu.
 * Each display should indicate which flight is currently being handled.
 * Also, the seat assignment display should indicate the confirmation status.
 */

#include <stdio.h>
#include <iso646.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define NAME_SIZE 20
#define SEAT_NUMBER 12
#define FLIGHT_NUMBER 4
struct seat_info
{
    int number;
    bool assigned;
    bool confirmed;
    char holder_fname[NAME_SIZE];
    char holder_lname[NAME_SIZE];
};
struct flight_info
{
    int number;
    struct seat_info seats_info[SEAT_NUMBER];
};
int show_toplevel_menu(void);
int show_menu(void);
int get_first(void);
void execute_choice(int choice, struct flight_info *);
void show_empty_seats_number(struct flight_info *);
void show_empty_seats_list(struct flight_info *);
void show_alphabetical_seats_list(struct flight_info *);
void assign_seat(struct flight_info *, char *fname, char *lname, int seat_number);
void deassign_seat(struct flight_info *, int seat_number);
void confirm_assignment(struct flight_info *, int seat_number);
int compare_by_first_name(const void *, const void *);


int main(void) {
    struct flight_info flights_info[FLIGHT_NUMBER];
    FILE *fp = fopen("flights_info.dat", "rb");
    // if the flights info data file does not exist, fill flights_info with some random data
    if (fp == NULL)
    {
        flights_info[0].number = 102;
        flights_info[1].number = 311;
        flights_info[2].number = 444;
        flights_info[3].number = 519;
        for (int j = 0;j <FLIGHT_NUMBER;j++)
        {
            struct flight_info *flight_info = &flights_info[j];
            for (int i = 0;i < SEAT_NUMBER ;i++)
            {
                struct seat_info *seat_info = &flight_info->seats_info[i];
                seat_info->number = 20 - i;
                seat_info->assigned = false;
                seat_info->confirmed = false;
                seat_info->holder_fname[0] = '\0';
                seat_info->holder_lname[0] = '\0';
            }
        }
    }
    // if the flights info data file does exist, fill flights_info with data read from file
    else
    {
        fread(flights_info, sizeof(struct flight_info), FLIGHT_NUMBER, fp);
        fclose(fp);
    }
    int choice;
    while ((choice = show_toplevel_menu()) != 'q')
    {
        struct flight_info *flight_info;
        switch (choice)
        {
            case 'a':
                flight_info = &flights_info[0];
                break;
            case 'b':
                flight_info = &flights_info[1];
                break;
            case 'c':
                flight_info = &flights_info[2];
                break;
            case 'd':
                flight_info = &flights_info[3];
                break;
            default:
                fprintf(stderr, "Invalid choice, please enter a, b, c, d, q.\n");
                break;
        } 
        while ((choice = show_menu()) != 'g')
        {
            execute_choice(choice, flight_info);
        } 
    }
    fp = fopen("flights_info.dat", "wb");
    fwrite(flights_info, sizeof(struct flight_info), FLIGHT_NUMBER, fp);
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
    printf("f) Confirm assignment\n");
    printf("g) Exit to toplevel menu \n");
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

void execute_choice(int choice, struct flight_info *flight_info)
{
    char first_name[NAME_SIZE];
    char last_name[NAME_SIZE];
    int seat_number;
    int flight_number = flight_info->number;
    struct seat_info *seats_info = flight_info->seats_info;

    switch (choice)
    {
        case 'a':
            show_empty_seats_number(flight_info);
            break;
        case 'b':
            show_empty_seats_list(flight_info);
            break;
        case 'c':
            show_alphabetical_seats_list(flight_info);
            break;
        case 'd':
            printf("Assign a seat by entering your first name, last name and the seat number: \n");
            scanf("%s %s %d", first_name, last_name, &seat_number);
            while (getchar() != '\n')
            {
                continue;
            } 
            assign_seat(flight_info, first_name, last_name, seat_number);
            break;
        case 'e':
            printf("Cancel assignment to a seat by entering the seat number: \n");
            scanf("%d", &seat_number);
            while (getchar() != '\n')
            {
                continue;
            } 
            deassign_seat(flight_info, seat_number);
            break;
        case 'f':
            printf("Confirm assignment to a seat by entering the seat number: \n");
            scanf("%d", &seat_number);
            while (getchar() != '\n')
            {
                continue;
            } 
            confirm_assignment(flight_info, seat_number);
            break;
        default:
            fprintf(stderr, "Invalid choice, please enter a, b, c, d, e, f\n");
            break;
    } 
}

void show_empty_seats_number(struct flight_info *flight_info)
{
    int count = 0;
    for (int i = 0;i < SEAT_NUMBER;i++)
    {
        if (!flight_info->seats_info[i].assigned)
        {
            count++;
        }
    }
    printf("Number of empty seats in flight %d is %d\n", flight_info->number, count);
}

void show_empty_seats_list(struct flight_info *flight_info)
{
    printf("In flight %d:\n", flight_info->number);
    for (int i = 0;i < SEAT_NUMBER;i++)
    {
        if (!flight_info->seats_info[i].assigned)
        {
            printf("Seat %d is unassigned\n", flight_info->seats_info[i].number);
        }
    }
}
/* show seats ordered by first name
 */
void show_alphabetical_seats_list(struct flight_info *flight_info)
{
    struct seat_info *seats_info = flight_info->seats_info;
    struct seat_info *ptr_array[SEAT_NUMBER];

    for (int i = 0;i < SEAT_NUMBER ;i++)
    {
        ptr_array[i] = &seats_info[i];
    }
    qsort(ptr_array, SEAT_NUMBER, sizeof(struct seat_info *), compare_by_first_name);
    printf("In flight %d:\n", flight_info->number);
    for (int i = 0;i < SEAT_NUMBER ;i++)
    {
        if (ptr_array[i]->assigned)
        {
            printf("Seat %d is assigned to %s %s %s\n", ptr_array[i]->number, ptr_array[i]->holder_fname, ptr_array[i]->holder_lname, ptr_array[i]->confirmed ? "and confirmed" : "but not confirmed");
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


void assign_seat(struct flight_info *flight_info,  char *fname, char *lname, int seat_number)
{
    struct seat_info *seats_info = flight_info->seats_info;
    for (int i = 0;i < SEAT_NUMBER ;i++)
    {
        if (seats_info[i].number == seat_number)
        {

            if (seats_info[i].assigned )
            {
                fprintf(stderr, "Flight %d seat %d is already assigned to another customer\n", flight_info->number, seats_info->number);
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
    fprintf(stderr, "Flight %d seat %d not found.\n", flight_info->number, seat_number);
}
void deassign_seat(struct flight_info *flight_info, int seat_number)
{
    struct seat_info *seats_info = flight_info->seats_info;
    for (int i = 0;i < SEAT_NUMBER ;i++)
    {
        if (seats_info[i].number == seat_number)
        {
           seats_info[i].assigned = false; 
           return;
        }
    }
    fprintf(stderr, "Flight %d seat %d not found.\n", flight_info->number, seat_number);
}
void confirm_assignment(struct flight_info *flight_info, int seat_number)
{
    struct seat_info *seats_info = flight_info->seats_info;
    for (int i = 0;i < SEAT_NUMBER ;i++)
    {
        if (seats_info[i].number == seat_number)
        {
            if (seats_info[i].assigned)
            {
                seats_info[i].confirmed = true; 
            }
            else
            {
                fprintf(stderr, "Please assign this seat first\n");
            }
            return;
        }
    }
    fprintf(stderr, "Flight %d seat %d not found.\n", flight_info->number, seat_number);
}

int show_toplevel_menu(void)
{
    printf("Please choose a flight\n");
    printf("a) 102      b) 311\n");
    printf("c) 444      d) 519\n");
    printf("q) quit\n");
    return get_first();
}


