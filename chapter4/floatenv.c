/*************************************************************************
	> File Name: floatenv.c
	> Author: 
	> Mail: 
	> Created Time: Thu Feb 21 13:48:33 2019
 ************************************************************************/

#include <stdio.h>

int main(void) {
    float n1 = 3.0; 
    double n2 = 3.0; 
    long n3 = 2000000000; 
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4); 
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

}
