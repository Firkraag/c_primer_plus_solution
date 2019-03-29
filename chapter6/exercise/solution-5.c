/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Sat 30 Mar 2019 02:25:54 AM CST
 ************************************************************************/

#include<stdio.h>
/*Have a program request the user to enter an uppercase letter. Use nested loops to produce
a pyramid pattern like this:
 A
 ABA
 ABCBA
 ABCDCBA
 ABCDEDCBA
The pattern should extend to the character entered. For example, the preceding pattern
would result from an input value of E. Hint: Use an outer loop to handle the rows. Use
three inner loops in a row, one to handle the spaces, one for printing letters in ascending
order, and one for printing letters in descending order. If your system doesn’t use ASCII
or a similar system that represents letters in strict number order, see the suggestion in
programming exercise 3.  
*/

int main(void) {
    char center_char;

    printf("Please enter an uppercase letter:\n");
    scanf("%c", &center_char);

    for (int i = 1; i <= center_char - 'A' + 1; i++)
    {
        char row_center_char = 'A' + i - 1;
        int space_number = center_char - row_center_char;
        for (int j = 1; j <= space_number; j++)
        {
            printf(" ");
        }
        for (char j = 'A'; j < row_center_char; j++)
        {
            printf("%c", j);
        }
        for (char c = row_center_char; c >= 'A'; c--)
        {
            printf("%c", c);
        }
        for (int j = 1; j <= space_number; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}


