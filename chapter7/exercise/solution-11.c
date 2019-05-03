/*************************************************************************
	> File Name: solution-11.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  2 18:06:55 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

#define ARTICHOKES_CHARGE_PER_POUND 2.05
#define BEETS_CHARGE_PER_POUND 1.15
#define CARROTS_CHARGE_PER_POUND 1.09
#define DISCOUNT_THRESHOLD 100
#define DISCOUNT_RATE 0.05
#define FIRST_LEVEL_SHIPPING_BOUNDARY 5
#define SECOND_LEVEL_SHIPING_BOUNDARY 20
#define FIRST_LEVEL_SHIPPING_CHARGE 6.5
#define SECOND_LEVEL_SHIPPING_CHARGE 14.00
#define THIRD_LEVEL_SHIPPING_CHARGE_PER_POUND 0.50
/* The ABC Mail Order Grocery sells artichokes for $2.05 per pound, beets for $1.15 per pound, and carrots for $1.09 per pound. 
 * It gives a 5% discount for orders of $100 or more prior to adding shipping costs. 
 * It charges $6.50 shipping and handling for any order of 5 pounds or under, 
 * $14.00 shipping and handling for orders over 5 pounds and under 20 pounds, 
 * and $14.00 plus $0.50 per pound for shipments of 20 pounds or more. 
 * Write a program that uses a switch statement in a loop such that a response of `a` lets the user enter the pounds of artichokes desired, 
 * `b` the pounds of beets, `c` the pounds of carrots, and `q` allows the user to exit the ordering process. 
 * The program should keep track of cumulative totals. That is, if the user enters 4 pounds of beets and later enters 5 pounds of beets, the program should use report 9 pounds of beets. 
 * The program then should compute the total charges, the discount, if any, the shipping charges, and the grand total. 
 * The program then should display all the purchase information: the cost per pound, the pounds ordered, and the cost for that order for each vegetable, the total cost of the order, the discount (if there is one), the shipping charge, and the grand total of all the charges.
*/
int main(void) {
    double total_artichokes_weight = 0.0, total_beets_weight = 0.0, total_carrots_weight = 0.0;
    while (1)
    {
        printf("\na. artichokes\t\tb. beets\n"
                "c. carrots\t\tq. exit\n"); 
        printf("Please choose one action: ");  
        char action[2];
        double artichokes_weight;
        double beets_weight;
        double carrots_weight;
        scanf("%s", action);
        switch (action[0])
        {
            case 'q':
                return 0;
            case 'a':
                printf("Please enter the weight of artichokes: "); 
                scanf("%lf", &artichokes_weight);
                total_artichokes_weight += artichokes_weight;
                break;
            case 'b':
                printf("Please enter the weight of beets: "); 
                scanf("%lf", &beets_weight);
                total_beets_weight += beets_weight;
                break;
            case 'c':
                printf("Please enter the weight of carrots: "); 
                scanf("%lf", &carrots_weight);
                total_carrots_weight += carrots_weight;
                break;
        }; 
        double total_charges = total_artichokes_weight * ARTICHOKES_CHARGE_PER_POUND + total_beets_weight * BEETS_CHARGE_PER_POUND + total_carrots_weight * CARROTS_CHARGE_PER_POUND;
        double discount = 0.0;
        if (total_charges >= DISCOUNT_THRESHOLD )
        {
            discount = total_charges * DISCOUNT_RATE;
        } 
        double total_weight = total_artichokes_weight + total_beets_weight + total_carrots_weight;
        double shipping_charges;
        if (total_weight <= FIRST_LEVEL_SHIPPING_BOUNDARY)
        {
            shipping_charges = FIRST_LEVEL_SHIPPING_CHARGE;
        }
        else if ( total_weight < SECOND_LEVEL_SHIPING_BOUNDARY)
        {
            shipping_charges = SECOND_LEVEL_SHIPPING_CHARGE;
        }
        else {
            shipping_charges = SECOND_LEVEL_SHIPPING_CHARGE + THIRD_LEVEL_SHIPPING_CHARGE_PER_POUND * total_weight;
        }
        double grand_total = total_charges - discount + shipping_charges;
        printf("the cost per pound = %f, the pounds ordered = %f, the cost for artichokes = %f, the cost for beets = %f, the cost for carrots = %f, the total cost of the order = %f, the discount = %f, the shipping charge = %f, the grand total of all the charges = %f\n", grand_total / total_weight, total_weight, total_artichokes_weight * ARTICHOKES_CHARGE_PER_POUND, total_beets_weight * BEETS_CHARGE_PER_POUND, total_carrots_weight * CARROTS_CHARGE_PER_POUND, total_charges, discount, shipping_charges, grand_total); 

    } 
}
