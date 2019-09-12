/*************************************************************************
	> File Name: zippo2.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 12 20:12:57 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* zippo2.c -- zippo info via a pointer variable */
int main(void) {
    int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
    int (*pz)[2];
    pz = zippo;

    printf(" pz = %p,    pz + 1 = %p\n", 
            pz, pz + 1);
    printf(" pz[0] = %p,    pz[0] + 1 = %p\n", 
            pz[0], pz[0] + 1);
    printf(" *pz = %p,    *pz + 1 = %p\n", 
            *pz, *pz + 1);
    printf("pz[0][0] = %d\n", pz[0][0]);
    printf("    *pz[0] = %d\n", *pz[0]);
    printf("    **pz = %d\n", **pz);
    printf("    pz[2][1] = %d\n", pz[2][1]);
    printf("    *(*(pz + 2) + 1) = %d\n", *(*(pz + 2) + 1));
    return 0;
}
