/*************************************************************************
	> File Name: solution-7.c
	> Author: 
	> Mail: 
	> Created Time: Tue Sep 10 19:10:59 2019
 ************************************************************************/
/* Write a program with the same behavior as described in exercise 6, 
 * but use an unsigned long variable to hold the font information and 
 * use the bitwise operators instead of bit members to manage the information.
 */
#include <stdio.h>
#include <iso646.h>
#include <stdbool.h>
#include <stdlib.h>
#define LEFT 0
#define CENTER 1
#define RIGHT 2
#define ID_MASK 0xff
#define SIZE_MASK 0x7f00
#define ALIGNMENT_MASK 0x30000
#define ALIGHMENT_LEFT 0x00000
#define ALIGHMENT_CENTER 0x10000
#define ALIGHMENT_RIGHT 0x20000
#define BOLD_MASK 0x100000
#define BOLD_ON 0x100000
#define BOLD_OFF 0
#define ITALIC_MASK 0x200000
#define ITALIC_ON 0x200000
#define ITALIC_OFF 0
#define UNDERLINE_MASK 0x400000
#define UNDERLINE_ON 0x400000
#define UNDERLINE_OFF 0
struct font_info {
    unsigned id             : 8;
    unsigned size           : 7;
    unsigned alignment      : 2;
    bool bold               : 1;
    bool italic             : 1;
    bool underline          : 1;
};
void show_font_info(const unsigned long);
void show_menu(void);
int get_choice(void);
int get_first(void);
void change_font(unsigned long *);
void change_size(unsigned long *);
void change_alignment(unsigned long *);
void toggle_bold(unsigned long *);
void toggle_italic(unsigned long *);
void toggle_underline(unsigned long *);
int main(void) {
    unsigned long font = 0x000c01;
    int choice;
    while (show_font_info(font),show_menu(), (choice = get_choice()) != 'q')
    {
        switch (choice)
        {
            case 'f':
                change_font(&font);
                break;
            case 's':
                change_size(&font);
                break;
            case 'a':
                change_alignment(&font);
                break;
            case 'b':
                toggle_bold(&font);
                break;
            case 'i':
                toggle_italic(&font);
                break;
            case 'u':
                toggle_underline(&font);
                break;
            default:
                fprintf(stderr, "Invalid choice, please enter f, s, a, b, i, u, q\n");
                exit(EXIT_FAILURE);
                break;
        } 
    } 
    return 0;
}
void show_font_info(const unsigned long font)
{
    printf("%#lx\n", font);
    printf("ID\tSIZE\tALIGNMENT\tB\tI\tU\n");
    printf("%lu\t%lu\t", font & ID_MASK, (font & SIZE_MASK) >> 8);
    switch (font & ALIGNMENT_MASK)
    {
        case ALIGHMENT_LEFT:
            printf("left\t");
            break;
        case ALIGHMENT_CENTER:
            printf("center\t");
            break;
        case ALIGHMENT_RIGHT:
            printf("right\t");
            break;
    } 
    printf("%s\t", (font & BOLD_MASK) == BOLD_ON ? "on" : "off");
    printf("%s\t", (font & ITALIC_MASK) == ITALIC_ON ? "on" : "off");
    printf("%s\n", (font & UNDERLINE_MASK) == UNDERLINE_ON ? "on" : "off");
}

void show_menu(void)
{
    printf("f) change font      s) change size      a) change alignment\n");
    printf("b) toggle bold      i) toggle italic    u) toggle underline\n");
    printf("q) quit\n");
}

int get_choice(void)
{
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
void change_font(unsigned long *font)
{
    unsigned id;
    printf("Enter font id (0-255): ");
    scanf("%u", &id);
    while (getchar() != '\n')
    {
    } 
    *font &= ~ID_MASK;
    *font |= (id & ID_MASK);
}
void change_size(unsigned long *font)
{
    unsigned size;
    printf("Enter font size (0-127): ");
    scanf("%u", &size);
    while (getchar() != '\n')
    {
    } 
    *font &= ~SIZE_MASK;
    *font |= ((size & 0x7f) << 8);
}
void change_alignment(unsigned long *font)
{
    printf("Enter %#lx\n", *font);
    *font &= ~ALIGNMENT_MASK;
    int choice;
    printf("Select alignment:\n");
    printf("1)left  c)center    r)right\n");
    choice = get_first();
    switch (choice)
    {
        case 'l':
            *font |= ALIGHMENT_LEFT;
            break;
        case 'c':
            *font |= ALIGHMENT_CENTER;
            break;
        case 'r':
            *font |= ALIGHMENT_RIGHT;
            break;
        default:
            fprintf(stderr, "Invalid choice for alignment, please enter l, c, r\n");
            exit(EXIT_FAILURE);
            break;
    } 
    printf("Exit %#lx\n", *font);
}
void toggle_bold(unsigned long *font)
{
    *font ^= BOLD_MASK;
}
void toggle_italic(unsigned long *font)
{
    *font ^= ITALIC_MASK;
}
void toggle_underline(unsigned long *font)
{
    *font ^= UNDERLINE_MASK;
}
