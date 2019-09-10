/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Tue Sep 10 18:29:03 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdbool.h>
#include <stdlib.h>

struct font_info {
    unsigned id             : 8;
    unsigned size           : 7;
    unsigned alignment      : 2;
    bool bold               : 1;
    bool italic             : 1;
    bool underline          : 1;
};

#define LEFT 0
#define CENTER 1
#define RIGHT 2
void show_font_info(struct font_info *);
void show_menu(void);
int get_choice(void);
int get_first(void);
void change_font(struct font_info *);
void change_size(struct font_info *);
void change_alignment(struct font_info *);
void toggle_bold(struct font_info *);
void toggle_italic(struct font_info *);
void toggle_underline(struct font_info *);
int main(void) {
    struct font_info font = {1, 12, LEFT, false, false, false};
    int choice;
    while (show_font_info(&font),show_menu(), (choice = get_choice()) != 'q')
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
void show_font_info(struct font_info *font_info_ptr)
{
    printf("ID\tSIZE\tALIGNMENT\tB\tI\tU\n");
    printf("%u\t%u\t%s\t%s\t%s\t%s\n", font_info_ptr->id, font_info_ptr->size, \
            font_info_ptr->alignment == LEFT ? "left" : (font_info_ptr->alignment == CENTER ? "center" : "right"),\
            font_info_ptr->bold ? "on" : "off", font_info_ptr->italic ? "on" : "off", font_info_ptr->underline ? "on" : "off");
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
void change_font(struct font_info *font_info_ptr)
{
    unsigned id;
    printf("Enter font id (0-255): ");
    scanf("%u", &id);
    while (getchar() != '\n')
    {
    } 
    font_info_ptr->id = id & 0xff;
}
void change_size(struct font_info *font_info_ptr)
{
    unsigned size;
    printf("Enter font size (0-127): ");
    scanf("%u", &size);
    while (getchar() != '\n')
    {
    } 
    font_info_ptr->size = size & 0x7f;
}
void change_alignment(struct font_info *font_info_ptr)
{
    unsigned alignment;
    int choice;
    printf("Select alignment:\n");
    printf("1)left  c)center    r)right\n");
    choice = get_first();
    switch (choice)
    {
        case 'l':
            font_info_ptr->alignment = LEFT;
            break;
        case 'c':
            font_info_ptr->alignment = CENTER;  
            break;
        case 'r':
            font_info_ptr->alignment = RIGHT;
            break;
        default:
            fprintf(stderr, "Invalid choice for alignment, please enter l, c, r\n");
            exit(EXIT_FAILURE);
            break;
    } 
}
void toggle_bold(struct font_info *font_info_ptr)
{
    font_info_ptr->bold = !font_info_ptr->bold;
}
void toggle_italic(struct font_info *font_info_ptr)
{
    font_info_ptr->italic = !font_info_ptr->italic;
}
void toggle_underline(struct font_info *font_info_ptr)
{
    font_info_ptr->underline = !font_info_ptr->underline;
}
