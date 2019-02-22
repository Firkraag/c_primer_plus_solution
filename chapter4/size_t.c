/*************************************************************************
	> File Name: size_t.c
	> Author: 
	> Mail: 
	> Created Time: Wed Feb 20 16:05:47 2019
 ************************************************************************/

#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

int main(void) {
    const size_t N = 100;
    int numbers[N];
    for (size_t ndx = 0; ndx < N; ++ndx)
    {
        numbers[ndx] = ndx;
    }
    printf("SIZE_MAX = %zu\n", SIZE_MAX);
    size_t size = sizeof numbers;
    printf("size = %zu\n", size);
}
