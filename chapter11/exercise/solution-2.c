/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 14 20:58:47 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <ctype.h>
#define READ_CHAR_EVERYTIME 10



/* Modify and test the function in exercise 1 so that it stops after n characters or after the first blank, tab, or newline, whichever comes first. (Don’t just use scanf().)
 */
int main(void) {
    int get_next_n_chars(char *, int);
    int read_char_number; 
    char buffer[READ_CHAR_EVERYTIME + 1];

    do
    {
        read_char_number = get_next_n_chars(buffer, READ_CHAR_EVERYTIME);
        printf("%s", buffer);
    } while (read_char_number >= 0); 

}
// `array` is a char array of size at least n + 1
int get_next_n_chars(char *array, int n)
{
    for (int i = 0;i < n;i++)
    {
        int c = getchar();
        if (c == EOF)
        {
            array[i] = '\0';
            return EOF;
        }

        else if (isspace(c))
        {
            array[i] = c;
            array[i + 1] = '\0';
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
