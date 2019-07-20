/*************************************************************************
	> File Name: p_and_s.c
	> Author: 
	> Mail: 
	> Created Time: Thu Jul 18 08:30:43 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* pointers and strings
 */
int main(void) {
    const char *mesg = "Don't be a fool!";
    const char *copy;

    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

    return 0;
}

