/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Sep 2019 08:44:18 PM CST
 ************************************************************************/

#include <stdio.h>
/* Write a program that sequentially displays onscreen 
 * all the files listed in the command line.
 * Use argc to control a loop
 */
int main(int argc, char *argv[]) {
    for (int i = 1;i < argc;i++) 
    {
        FILE *fp = fopen(argv[i], "rb");
        int ch;
        while ((ch = getc(fp)) != EOF)
        {
            putchar(ch);
        }
        fclose(fp);
    } 
    return 0;
}
