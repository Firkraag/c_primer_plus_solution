/*************************************************************************
	> File Name: solution-1.c
	> Author: 
	> Mail: 
	> Created Time: Sat Apr 27 21:15:37 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* Write a program that reads input until encountering the # character and then reports
the number of spaces read, the number of newline characters read, and the number of all other characters read.
*/

int main(void)
{
    char ch;
    int sc = 0;  // space count
    int nc = 0; // newline count
    int oc = 0; // other char count
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
        {
            sc++;
        }
        else if ( ch == '\n') {
            nc++;
        }
        else {
            oc++;
        }
    }
    printf("%d spaces, %d newlines, %d other", sc, nc, oc);
    return 0;
}
