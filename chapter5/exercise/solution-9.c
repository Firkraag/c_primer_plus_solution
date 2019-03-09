/*************************************************************************
	> File Name: solution-9.c
	> Author: 
	> Mail: 
	> Created Time: Sat Mar  9 10:33:17 2019
 ************************************************************************/

#include <stdio.h>
/*  Write a program that requests the user to enter a Fahrenheit temperature. The program should read the temperature as a type double number and pass it as an argument to
a user-supplied function called Temperatures(). This function should calculate the Celsius equivalent and the Kelvin equivalent and display all three temperatures with a precision of two places to the right of the decimal. It should identify each value with the temperature scale it represents. Here is the formula for converting Fahrenheit to Celsius:
Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0)
The Kelvin scale, commonly used in science, is a scale in which 0 represents absolute zero, the lower limit to possible temperatures. Here is the formula for converting Celsius to Kelvin:
Kelvin = Celsius + 273.16
The Temperatures() function should use const to create symbolic representations of the three constants that appear in the conversions. The main() function should use
a loop to allow the user to enter temperatures repeatedly, stopping when a q or other nonnumeric value is entered. Use the fact that scanf() returns the number of items read, so it will return 1 if it reads a number, but it won’t return 1 if the user enters q. The == operator tests for equality, so you can use it to compare the return value of scanf() with 1.
*/
int main(void) {
    double Fahrenheit; 
    void Temperatures(double Fahrenheit);
    int read_number;
    printf("Please enter a Fahrenheit temperature: ");
    read_number = scanf("%lf", &Fahrenheit);
    
    while (read_number == 1) {
        Temperatures(Fahrenheit);
        printf("Please enter a Fahrenheit temperature: ");
        read_number = scanf("%lf", &Fahrenheit);
    }

    return 0;
}

void Temperatures(double Fahrenheit) {
    double Fahrenheit2Celsius(double), Celsius2Kelvin(double);
    double Celsius = Fahrenheit2Celsius(Fahrenheit);
    double Kelvin = Celsius2Kelvin(Celsius);

    printf("Fahrenheit temperature is %.2lf, Celsius temperature is %.2lf, Kelvin temperature is %.2lf\n", Fahrenheit, Celsius, Kelvin);
}

double Fahrenheit2Celsius(double Fahrenheit) {
    const double C1 = 5.0;
    const double C2 = 9.0;
    const double C3 = 32.0;

    return C1 / C2 * (Fahrenheit - C3);
}

double Celsius2Kelvin(double Celsius) {
    double C1 = 273.16;

    return Celsius + C1;
}
