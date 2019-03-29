/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Sat 30 Mar 2019 02:20:10 AM CST
 ************************************************************************/

#include<stdio.h>
/* Use nested loops to produce the following pattern:
 A
 BC
 DEF
 GHIJ
 KLMNO
 PQRSTU
If your system doesn’t encode letters in numeric order, see the suggestion in
programming exercise 3. 
*/

int main(void) {
    char start_char = 'A';
    for (int i = 1; i <= 6; i++)
    {
        start_char += i - 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%c", start_char + j - 1);
        }
        printf("\n");
    }
}


