/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Fri Mar  8 23:52:23 2019
 ************************************************************************/

#include <stdio.h>

/* Write a program that asks the user to enter a height in centimeters and then displays the height in centimeters and in feet and inches. Fractional centimeters and inches should be allowed, and the program should allow the user to continue entering heights until a nonpositive value is entered. A sample run should look like this:
Enter a height in centimeters: 182
182.0 cm = 5 feet, 11.7 inches
Enter a height in centimeters (<=0 to quit): 168.7 
168.0 cm = 5 feet, 6.4 inches
Enter a height in centimeters (<=0 to quit): 0 
bye
*/

int main(void) {
    double height;
    const double CENTIMETERS_PER_FOOT = 30.48;
    const double CENTIMETERS_PER_INCH = 2.54;

    printf("Enter a height in centimeters (<=0 to quit): ");
    scanf("%lf", &height);
    while (height > 0) {
        int feet =  height / CENTIMETERS_PER_FOOT;
        double inches = (height - feet * CENTIMETERS_PER_FOOT) / CENTIMETERS_PER_INCH;
        printf("%f cm = %d feet, %.1f inches\n", height, feet, inches); 
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%lf", &height);
    }

}
