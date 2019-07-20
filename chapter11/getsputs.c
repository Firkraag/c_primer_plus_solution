/*************************************************************************
	> File Name: getsputs.c
	> Author: 
	> Mail: 
	> Created Time: Thu Jul 18 10:14:42 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define  STLEN 5



/* using gets() and puts()
 */
int main(void) {
    char words[STLEN];
    
    puts("Enter a string, please.");
    gets(words);
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");

    return 0;
}
