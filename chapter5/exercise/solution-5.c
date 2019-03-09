/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Sat Mar  9 01:40:02 2019
 ************************************************************************/

#include <stdio.h>
/* Change the program addemup.c (Listing 5.13), which found the sum of the first 20 integers. (If you prefer, you can think of addemup.c as a program that calculates how much money you get in 20 days if you receive $1 the first day, $2 the second day, $3 the third day, and so on.) Modify the program so that you can tell it interactively how far the calculation should proceed. That is, replace the 20 with a variable that is read in.
*/
int main(void) {
    int end;
    int sum = 0;

    scanf("%d", &end);
    for (int i = 1; i <= end; i++)
    {
        sum += i;
    }
    printf("sum = %d\n", sum);
}
