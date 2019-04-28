/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Sat Apr 27 21:51:53 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* Using if else statements, write a program that reads input up to #, replaces each period with an exclamation mark, 
 * replaces each exclamation mark initially present with two exclamation marks, and reports at the end the number of substitutions it has made.
 */
int main(void) {
    int ch;
    int num_substitution = 0;
    while ((ch = getchar()) != '#' )
    {
        if (ch == '.' )
        {
           printf("!");  
           num_substitution++;
        } 
        else if (ch == '!') {
            printf("!!"); 
            num_substitution++;
        }
        else {
            printf("%c", ch); 
        }
    } 
    printf("\nthe number of substitutions is %d\n", num_substitution); 

}
