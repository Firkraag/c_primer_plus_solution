/*************************************************************************
	> File Name: r_drive0.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Jul 2019 02:16:50 AM CST
 ************************************************************************/

#include <stdio.h>
extern int rand0(void);

/* Listing 12.8 -- test the rand0() function
 */
int main(void) {
    int count;
    for (count = 0; count < 5; count++)
    {
        printf("%d\n", rand0());
    }
    return 0;
}
