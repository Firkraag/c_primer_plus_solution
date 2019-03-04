/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Mon Mar  4 21:53:54 2019
 ************************************************************************/

#include <stdio.h>
/* Write a program that asks for an integer and then prints all the integers from (and including) that value up to (and including) a value larger by 10. (That is, if the input is 5, the output runs from 5 to 15.) Be sure to separate each output value by a space or tab or newline.
 */
int main(void) {
    int num;

    printf("Please enter a integer:\n");
    scanf("%d", &num);

    for (int i = num; i <= num + 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}
