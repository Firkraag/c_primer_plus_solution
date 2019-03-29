/*************************************************************************
	> File Name: solution-1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 30 Mar 2019 02:08:45 AM CST
 ************************************************************************/

#include<stdio.h>
#define LETTERS_NUMBER 26
/* Write a program that creates an array with 26 elements and stores the 26 lowercase letters in it. Also have it show the array contents.  */
int main(void) {
    char lowercase_letters[LETTERS_NUMBER];

    for (int i = 0; i < LETTERS_NUMBER; i++) {
        lowercase_letters[i] = 'a' + i;
    }
    for (int i = 0; i < LETTERS_NUMBER; i++) {
        printf("%c", lowercase_letters[i]);
    }
}
