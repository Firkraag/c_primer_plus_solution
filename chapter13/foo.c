/*************************************************************************
	> File Name: foo.c
	> Author: 
	> Mail: 
	> Created Time: Sat 03 Aug 2019 11:34:35 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("reverse.c", "rb");

    fseek(fp, -1, SEEK_END);
    printf("char: %#d", getc(fp));
}
