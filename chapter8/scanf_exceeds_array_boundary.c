/*************************************************************************
	> File Name: scanf_exceeds_array_boundary.c
	> Author: 
	> Mail: 
	> Created Time: Fri May 10 21:43:14 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <string.h> 



int main(void) {
    char word[3];

    scanf("%s", word);
    printf("%zd\n", strlen(word)); 
}
