/*************************************************************************
	> File Name: repeat.c
	> Author: 
	> Mail: 
	> Created Time: Thu Jul 25 20:18:48 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* Listing 11.31 -- main() with arguments
 */
int main(int argc, char *argv[]) {
    int count;

    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 1;count < argc;count++)
    {
        printf("%d: %s\n", count, argv[count]);
    }
    printf("\n");

    return 0;
}
