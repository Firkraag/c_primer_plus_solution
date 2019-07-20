/*************************************************************************
	> File Name: put_out.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 19 20:02:16 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define DEF "I am a #defined string."


/* using puts()
 */
int main(void) {
    char str1[80] = "An array was initialized to me.";
    const char *str2 = "A pointer was initialized to me.";

    puts("I'm an argument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2 + 4);

    return 0;
}
