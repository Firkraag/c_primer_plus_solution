/*************************************************************************
	> File Name: solution-12.c
	> Author: 
	> Mail: 
	> Created Time: Sat 30 Mar 2019 03:24:49 AM CST
 ************************************************************************/

#include<stdio.h>
/* Consider these two infinite series:
 1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
 1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
Write a program that evaluates running totals of these two series up to some limit of
number of terms. Hint: –1 times itself an odd number of times is –1, and –1 times itself
an even number of times is 1. Have the user enter the limit interactively; let a zero or
negative value terminate input. Look at the running totals after 100 terms, 1000 terms,
10,000 terms. Does either series appear to be converging to some value? 
*/

int main() {
    int number_of_terms;
    double result;


    while (printf("Please enter number of terms: "), scanf("%d", &number_of_terms) == 1 && number_of_terms > 0)
    {
        
        result = 0.0;
        for (int i = 1; i <= number_of_terms; i++)
        {
            result += 1.0 / i;
        }
        printf("1.0 + 1.0 / 2.0 + 1.0 / 3.0 + 1.0 / 4.0 + ... = %f\n", result);
        result = 0.0;
        for (int i = 1; i <= number_of_terms; i++)
        {
            if (i % 2 == 0)
            {
                result -= 1.0 / i;
            }
            else {
                result += 1.0 / i;
            }
        }
        printf("1.0 - 1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0 + ... = %f\n", result);
    }
    printf("Done!\n");
}

