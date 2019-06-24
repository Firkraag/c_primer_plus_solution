/*************************************************************************
	> File Name: solution-3.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jun 23 02:14:33 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <ctype.h>
/* Write a program that reads input as a stream of characters until encountering EOF.
 * Have it report the number of uppercase letters, the number of lowercase letters, 
 * and the number of other characters in the input. 
 * You may assume that the numeric values for the lowercase letters are sequential and assume the same for uppercase. 
 * Or, more portably, you can use appropriate classification functions from the ctype.h library.
*/


int main(void) {
    int ch;
    unsigned long uppercase_number = 0, lowercase_number = 0, other_number = 0;

    while ((ch = getchar()) != EOF )
    {
        if (isupper(ch))
        {
            uppercase_number++;
        }
        else if (islower(ch))
        {
            lowercase_number++;
        }
        else
        {
            other_number++;
        }
    } 
    printf("The number of uppercase letters, lowercase letters and other characters are respectively %lu, %lu, %lu\n", uppercase_number, lowercase_number, other_number);

    return 0;
}
