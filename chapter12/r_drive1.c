/*************************************************************************
	> File Name: r_drive1.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Jul 2019 02:22:22 AM CST
 ************************************************************************/

#include <stdio.h>
extern int rand1(void);
extern void srand1(unsigned int x);


/* Listing 12.10 -- test the rand1() and srand1()
 * compile with s_and_r.c
 */
int main(void) {
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    while (scanf("%u", &seed) == 1)
    {
        srand1(seed);
        for (count = 0; count < 5; count++)
        {
            printf("%d\n", rand1());
        }
        printf("Please enter next seed (q to quit):\n");
    }
    printf("Done\n");
    return 0;
}
