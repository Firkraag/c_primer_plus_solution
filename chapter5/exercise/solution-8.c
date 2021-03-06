/*************************************************************************
	> File Name: solution-8.c
	> Author: 
	> Mail: 
	> Created Time: Sat Mar  9 10:19:20 2019
 ************************************************************************/

#include <stdio.h>
/*  Write a program that displays the results of applying the modulus operation. The user should first enter an integer to be used as the second operand, which will then remain unchanged. Then the user enters the numbers for which the modulus will be computed, terminating the process by entering 0 or less. A sample run should look like this:
This program computes moduli.
Enter an integer to serve as the second operand: 256
Now enter the first operand: 438
438 % 256 is 182
Enter next number for first operand (<= 0 to quit): 1234567 
1234567 % 256 is 135
Enter next number for first operand (<= 0 to quit): 0
Done
*/
int main(void) {
    int first, second;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &second);
    printf("Now enter the first operand: ");
    scanf("%d", &first);
    printf("%d %% %d is %d\n", first, second, first % second);
    
    
    while (printf("Enter next number for first operand (<= 0 to quit): "),scanf("%d", &first),first > 0)
    {
        printf("%d %% %d is %d\n", first, second, first % second);
    }
    printf("Done\n");
}
