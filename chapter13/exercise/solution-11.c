/*************************************************************************
	> File Name: solution-11.c
	> Author: 
	> Mail: 
	> Created Time: Fri Sep  6 08:23:31 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 300
/* Write a program that takes two command-line arguments. 
 * The first is a string; the second is the name of a file. 
 * The program should then search the file, printing all lines containing the string. 
 * Because this task is line oriented rather than character oriented, use fgets() instead of getc(). 
 * Use the standard C library function strstr() (briefly described in exercise 7 of Chapter 11) to search each line for the string. 
 * Assume no lines are longer than 255 characters.
 */


int main(int argc, char *argv[]) {
    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s STRING FILENAME\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    const char *const str = argv[1];
    FILE *const fp = fopen(argv[2], "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Open %s failed\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    char line[SIZE];
    while (fgets(line, SIZE, fp) != NULL)
    {
        if (strstr(line, str) != NULL)
        {
           printf("%s", line); 
        }
    } 
    fclose(fp);
     

}
