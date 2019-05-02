/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Sun Apr 28 17:14:15 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* Write a program that reads input up to # and reports the number of times that the
sequence ei occurs.
*/
int main(void) {
    int prev_char = -1;
    int curr_char;
    int occur_time = 0;
    while ((curr_char = getchar()) != '#' )
    {
        if ((prev_char == 'e') and (curr_char == 'i' ))
        {
            occur_time++;
        } 
        prev_char = curr_char;
    } 
    printf("`ei` occurs %d times\n", occur_time); 
}
