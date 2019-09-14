/*************************************************************************
	> File Name: solution-3.c
	> Author: 
	> Mail: 
	> Created Time: Sat Sep 14 12:49:09 2019
 ************************************************************************/
/* Polar coordinates describe a vector in terms of magnitude and the counterclockwise angle from the x-axis to the vector. 
 * Rectangular coordinates describe the same vector in terms of x and y components (see Figure 16.3). 
 * Write a program that reads the magnitude and angle (in degrees) of a vector and then displays the x and y components. 
 * The relevant equations are these:
 * x = rcosA    y = rsinA
 * To do the conversion, use a function that takes a structure containing the polar coordinates 
 * and returns a structure containing the rectangular coordinates (or use pointers to such structures, if you prefer).
 *
 */
#include <stdio.h>
#include <iso646.h>
#include <math.h>
struct polar_coordinate
{
    double magnitude;
    double angle;
};

struct rectangular_coordinate
{
    double x;
    double y;
};
struct rectangular_coordinate polar_to_rectangular(const struct polar_coordinate);
int main(void) {
    struct polar_coordinate pc;

    while (printf("Please enter magnitude and angle (in degrees), enter nonnumeric to quit: \n"), scanf("%lf %lf", &pc.magnitude, &pc.angle) == 2)
    {
        struct rectangular_coordinate rc = polar_to_rectangular(pc);
        printf("x = %f, y = %f\n", rc.x, rc.y);
    } 

    return 0;
}

struct rectangular_coordinate polar_to_rectangular(const struct polar_coordinate pc)
{
    double radian = pc.angle * M_PI / 180; // represent angle in radian
    struct rectangular_coordinate rc;
    rc.x = pc.magnitude * cos(radian);
    rc.y = pc.magnitude * sin(radian);
    return rc;
}
