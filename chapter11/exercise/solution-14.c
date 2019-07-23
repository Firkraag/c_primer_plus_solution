/*************************************************************************
	> File Name: solution-14.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 23 08:01:08 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <math.h>




/* Write a power-law program that works on a command-line basis. 
 * The first command-line argument should be the type double number to be raised to a certain power, 
 * and the second argument should be the integer power.
 */
int main (int argc, char *argv[]) 
{
    double number;
    int power;
    if (argc != 3)
    {
        printf("The commmand format is: %s DOUBLE INTEGER_POWER\n", argv[0]);
        return 1;
    }
    sscanf(argv[1], "%lf", &number);
    sscanf(argv[2], "%d", &power);
    printf("%f raised to power %d is %f\n", number, power, pow(number, power));
    return 0;

