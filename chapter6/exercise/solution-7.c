/*************************************************************************
	> File Name: solution-7.c
	> Author: 
	> Mail: 
	> Created Time: Sat 30 Mar 2019 02:43:12 AM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#define MAX_LENGTH 1024
/*Write a program that reads a single word into a character array and then prints the word
backward. Hint: Use strlen() ( Chapter 4 ) to compute the index of the last character in
the array 
*/

int main(void) {
    char word[MAX_LENGTH];

    scanf("%s", word);
    for (size_t i = strlen(word); i > 0; i--)
    {
        printf("%c", word[i - 1]);
    }
}


