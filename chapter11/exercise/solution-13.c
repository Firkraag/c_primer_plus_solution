/*************************************************************************
	> File Name: solution-13.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 23 07:58:09 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* Write a program that echoes the command-line arguments in reverse word order. 
 * That is, if the command-line arguments are see you later, the program should print later you see.
 */

int main (int argc, char *argv[]) 
{ 
    for (int i = argc - 1;i > 0;i--)
    {
        printf("%s ", argv[i]);
    }
    printf("\n");

    return 0;
}
