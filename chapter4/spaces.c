/*************************************************************************
	> File Name: spaces.c
	> Author: 
	> Mail: 
	> Created Time: Fri Feb 22 15:58:33 2019
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main(void)
{
    for (int ndx=0; ndx<=UCHAR_MAX; ndx++)
        if (isspace(ndx)) 
            printf("0x%02x\n", ndx);
}
