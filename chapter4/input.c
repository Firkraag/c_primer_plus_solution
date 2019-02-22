/*************************************************************************
	> File Name: input.c
	> Author: 
	> Mail: 
	> Created Time: Fri Feb 22 09:49:05 2019
 ************************************************************************/

#include <stdio.h>

int main(void) {
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}
