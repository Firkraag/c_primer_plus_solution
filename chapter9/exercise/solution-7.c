/*************************************************************************
	> File Name: solution-7.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul  7 17:37:45 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <ctype.h>




int main(void) {
    int get_alphabet_numerical_location(char);
    int c, pos;
    while ((c = getchar()) != EOF)
    {

        if ((pos = get_alphabet_numerical_location(c)) == -1)
        {
            printf("%c is not a letter\n", c);
        }
        else
        {
            printf("%c is a letter, the numeric location in the alphabet is %d\n", c, pos);
        }
    } 

    return 0;
}

/* Write a program that reads characters from the standard input to end-of-file. 
 * For each character, have the program report whether it is a letter. If it is a letter, also report its numerical location in the alphabet. 
 * For example, c and C would both be letter 3. 
 * Incorporate a function that takes a character as an argument and returns the numerical location if the charcter is a letter and that returns –1 otherwise.
 */

int get_alphabet_numerical_location(char ch)
{
    if (islower(ch))
    {
        return ch - 'a' + 1;
    }
    else if (isupper(ch))
    {
        return ch - 'A' + 1;
    }
    else
    {
        return -1;
    }
}
