/*************************************************************************
	> File Name: strings1.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 16 17:14:01 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  MSG "I am a symbolic string constant."
#define  MAXLENGTH 81

int main(void) {
    char words[MAXLENGTH] = "I am a string in an array.";
    const char *pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);

    return 0;
}
