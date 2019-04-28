/*************************************************************************
	> File Name: solution-3.c
	> Author: 
	> Mail: 
	> Created Time: Sat Apr 27 21:41:31 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* Write a program that reads integers until 0 is entered. 
 * After input terminates, the program should report the total number of even integers (excluding the 0) entered, 
 * the average value of the even integers, the total number of odd integers entered, and the average value of the odd integers.
*/
int main(void) {
    int n;
    int sum_even = 0, sum_odd = 0;
    int number_even = 0, number_odd = 0;

    while ((scanf("%d", &n) == 1) and (n != 0))
    {
        if (n % 2 )
        {
            number_odd++;
            sum_odd += n;
        } 
        else {
            number_even++;
            sum_even += n;
        }
    } 
    printf("total number of even integers = %d, average value of even integers = %f, total number of odd integers = %d, average value of odd integers = %f\n", number_even, (double) sum_even / number_even, number_odd, (double) sum_odd / number_odd); 
}
