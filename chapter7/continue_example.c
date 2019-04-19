/*************************************************************************
	> File Name: continue_example.c
	> Author: 
	> Mail: 
	> Created Time: Tue Apr 16 22:24:57 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>




int main(void) {
    void while_continue(void), for_continue(void), do_while_continue(void);
    /*while_continue();*/
    /*for_continue();*/
    do_while_continue();
}

void while_continue(void) {
    int count = 0;

    while (count < 10 )
    {
        int ch = getchar();
        if (ch == '\n' )
        {
            continue;
        } 
        putchar(ch);
        count++;
    } 

}

void for_continue(void) {
    for (int count = 0 ;count <10 ; count++)
    {
        int ch = getchar();
        if (ch == '\n')
        {
            continue;
        }
        putchar(ch);
    } 
}

void do_while_continue(void) {
    int count = 0;

    do
    {
        int ch = getchar();
        if (ch == '\n' )
        {
            continue;
        } 
        putchar(ch);
        count++;
    } 
    while (count < 10 );
}
