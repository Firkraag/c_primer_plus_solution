/*************************************************************************
	> File Name: solution-1.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 14 20:48:16 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define READ_CHAR_EVERYTIME 10


/* Design and test a function that fetches the next n characters from input (including blanks, tabs, and newlines), 
 * storing the results in an array whose address is passed as an argument.
 */

int main(void) {
    int get_next_n_chars(char *, int);
    int read_char_number; 
    char buffer[READ_CHAR_EVERYTIME + 1];

    do
    {
        read_char_number = get_next_n_chars(buffer, READ_CHAR_EVERYTIME);
        printf("%s", buffer);
    } while (read_char_number == READ_CHAR_EVERYTIME); 

}
int get_next_n_chars(char *array, int n)
{
    for (int i = 0;i < n;i++)
    {
        int c = getchar();
        if (c == EOF)
        {
            array[i] = '\0';
            return i;
        }
        else
        {
            array[i] = c;
        }
    }
    array[n] = '\0';

    return n;
}
