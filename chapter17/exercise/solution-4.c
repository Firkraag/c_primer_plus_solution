/*************************************************************************
	> File Name: solution-4.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Sep 2019 03:42:07 AM CST
 ************************************************************************/
/* Rewrite mall.c ( Listing 17.7 ) so that it simulates a double booth having two queues. 
 */
#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#define MIN_PER_HR 60.0
#define ENQUEUE_CUSTOMER(X) (customers ## X)++; temp = customertime(cycle);EnQueue(temp, &(line ## X));
bool newcustomer(double x);
Item customertime(long when);
int select_queue(int queue_number);

int main(void) {
    Queue line1, line2;
    Item temp;
    int hours;
    int perhour;
    long cycle, cyclelimit;
    long turnaways = 0;
    long customers1 = 0;
    long served1 = 0;
    long sum_line1 = 0;
    int wait_time1 = 0;
    long line_wait1 = 0;
    long customers2 = 0;
    long served2 = 0;
    long sum_line2 = 0;
    int wait_time2 = 0;
    long line_wait2 = 0;
    double min_per_cust;

    InitializeQueue(&line1);
    InitializeQueue(&line2);
    srand(time(NULL));
    puts("Case study: Sigmund Lander's Advice Booth");
    puts("Enter the number of simulation hours:");
    scanf("%d", &hours);
    cyclelimit = MIN_PER_HR * hours;
    puts("Enter the average number of customers per hour:");
    scanf("%d", &perhour);
    min_per_cust = MIN_PER_HR / perhour;
    for (cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))
        {
            if (QueueIsFull(&line1))
            {
                if (QueueIsFull(&line2))
                {
                    turnaways++;
                }
                else
                {
                    ENQUEUE_CUSTOMER(2)
                }
            }
            else
            {
                if (QueueIsFull(&line2))
                {
                    ENQUEUE_CUSTOMER(1)
                }
                else
                {
                    int queue = select_queue(2);
                    if (queue == 1)
                    {
                        ENQUEUE_CUSTOMER(1)
                    }
                    else
                    {
                        ENQUEUE_CUSTOMER(2)
                    }
                }

            }
        }
        if (wait_time1 <= 0 && !QueueIsEmpty(&line1))
        {
            DeQueue(&temp, &line1);

            wait_time1 = temp.processtime;
            line_wait1 += cycle - temp.arrive;
            served1++;
        }
        if (wait_time1 > 0)
        {
            wait_time1--;
        }
        sum_line1 += QueueItemCount(&line1);
        if (wait_time2 <= 0 && !QueueIsEmpty(&line2))
        {
            DeQueue(&temp, &line2);
            wait_time2 = temp.processtime;
            line_wait2 += cycle - temp.arrive;
            served2++;
        }
        if (wait_time2 > 0)
        {
            wait_time2--;
        }
        sum_line2 += QueueItemCount(&line2);
    }
    printf("For queue 1: \n");
    if (customers1 > 0)
    {
        printf("customers accepted: %ld\n", customers1);
        printf("  customers served: %ld\n", served1);
        printf("         turnaways: %ld\n", turnaways );
        printf("average queue size: %.2f\n", (double) sum_line1 / cyclelimit);
        printf("average wait time: %.2f minutes\n", (double) line_wait1 / served1);
    }
    else
    {
        puts("No customers!");
    }
    EmptyTheQueue(&line1);
    printf("For queue 2: \n");
    if (customers2 > 0)
    {
        printf("customers accepted: %ld\n", customers2);
        printf("  customers served: %ld\n", served2);
        printf("         turnaways: %ld\n", turnaways );
        printf("average queue size: %.2f\n", (double) sum_line2 / cyclelimit);
        printf("average wait time: %.2f minutes\n", (double) line_wait2 / served2);
    }
    else
    {
        puts("No customers!");
    }
    EmptyTheQueue(&line2);
    puts("Bye!");

    return 0;
}

bool newcustomer(double x)
{
    if (rand() * x / RAND_MAX < 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Item customertime(long when)
{
    Item cust;

    cust.processtime = rand() % 3 + 1;
    cust.arrive = when;
    return cust;
}
int select_queue(int queue_number)
{
    return rand() % queue_number + 1;
}
