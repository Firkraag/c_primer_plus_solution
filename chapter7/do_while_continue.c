/*************************************************************************
	> File Name: do_while_continue.c
	> Author: 
	> Mail: 
	> Created Time: Sat Apr 13 15:05:02 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>


/* do while continue behavior 
 */

int main(void) {
    int i = 0;
        do
        {
            if (i == 1 )
            {
                i++;
                continue;
            } 
            printf("%d\n", i++); 
        } while (i < 3); 
}
