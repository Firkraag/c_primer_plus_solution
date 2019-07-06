/*************************************************************************
  > File Name: solution-8.c
  > Author: 
  > Mail: 
  > Created Time: Thu Jun 27 19:56:30 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>



/* Write a program that shows you a menu offering you the choice of addition, subtraction, multiplication, or division. 
 * After getting your choice, the program asks for two numbers, then performs the requested operation. 
 * The program should accept only the offered menu choices. 
 * It should use type `float` for the numbers and allow the user to try again if he or she fails to enter a number. 
 * In the case of division, the program should prompt the user to enter a new value if 0 is entered as the value for the second number. 
 * A typical program run should look like this:
 * Enter the operation of your choice: 
 * a. add s. subtract
 * m. multiply d. divide
 * q. quit
 * a
 * Enter first number: 22.4
 * Enter second number: one
 * one is not an number.
 * Please enter a number, such as 2.5, -1.78E8, or 3: 1 22.4 + 1 = 23.4
 * Enter the operation of your choice:
 * a. add s. subtract
 * m. multiply d. divide
 * q. quit
 * d
 * Enter first number: 18.4
 * Enter second number: 0
 * Enter a number other than 0: 0.2
 * 18.4 / 0.2 = 92
 * Enter the operation of your choice:
 * a. add s. subtract
 * m. multiply d. divide
 * q. quit
 * q
 * Bye.
 */
int main(void) {
    char choice;
    float first, second;
    char get_choice(void);
    float get_float(void);

    while ((choice = get_choice()) != 'q')
    {
        printf("Enter first number: ");
        first = get_float();
        printf("Enter second number: ");
        second = get_float();
        switch (choice)
        {
            case 'a':
                printf("%f + %f = %f\n", first, second, first + second);
                break;
            case 's':
                printf("%f - %f = %f\n", first, second, first - second);
                break;
            case 'm':
                printf("%f * %f = %f\n", first, second, first * second);
                break;
            case 'd':
                while (second == 0 )
                {
                    printf("Enter a number other than 0: ");
                    second = get_float();
                } 
                printf("%f / %f = %f\n", first, second, first / second);
                break;
            default:
                printf("Program error!\n");
                break;
        } 
    } 
    printf("Bye.\n");

    return 0;

}
float get_float(void) {
    float input;
    char ch;

    while (scanf("%f", &input ) != 1)
    {
        while ((ch = getchar()) != '\n' )
        {
            putchar(ch);
        } 
        printf(" is not an number.\nPlease enter a "); 
        printf("number, such as 2.5, -1.78E8, or 3: "); 
    } 
    // skip rest characters in that line.
    while (getchar() != '\n' )
    {
        ;
    } 
    return input;
}
char get_choice(void) {
    int ch;
    char get_first_non_newline(void);
    printf("Enter the operation of your choice:\n"); 
    printf("a. add               s. substract\n");
    printf("m. multiply          d. divide\n");
    printf("q. quit\n");
    ch = get_first_non_newline();
    while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
    {
        printf("Please respond with a, b, c, d, or q.\n"); 
        ch = get_first_non_newline();
    } 

    return ch;
}

char get_first_non_newline(void) {
    int ch;

    // find first non-newline character
    while ((ch = getchar()) == '\n')
    {
        ;
    }
    // skip other characters in that line, including newline characters
    while (getchar() != '\n' )
    {
        continue;
    } 

    return ch;
}
