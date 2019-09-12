/*************************************************************************
	> File Name: preproc.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 Sep 2019 02:00:58 AM CST
 ************************************************************************/
/* Listing 16.1 -- simple preprocessor examples
 */
#include <stdio.h>
#define TWO 2
#define OW "Consistency is the last refuge of the unimagina\
tive. - Oscar Wilde"
#define FOUR TWO * TWO
#define FMT "x is %d.\n"
#define PX printf(FMT, x)
int main(void) {
    int x = TWO;
    PX;
    x = FOUR;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("TWO: OW\n");

    return 0;
}
