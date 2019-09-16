/*************************************************************************
	> File Name: queue.h
	> Author: 
	> Mail: 
	> Created Time: Sun Sep 15 09:07:55 2019
 ************************************************************************/
/* Listing 17.6 -- interface for a queue
 */
#ifndef QUEUE_H_
#define QUEUE_H_
#include <stdbool.h>

//typedef int Item;
typedef struct 
{
    long arrive;
    int processtime;
} Item;

#define MAXQUEUE 10
typedef struct node
{
    Item item;
    struct node *next;
} Node;

typedef struct 
{
    Node *front;
    Node *rear;
    int items;
} Queue;

void InitializeQueue(Queue *pq);
bool QueueIsFull(const Queue *pq);
bool QueueIsEmpty(const Queue *pq);
int QueueItemCount(const Queue *pq);
bool EnQueue(Item item, Queue *pq);
bool DeQueue(Item *pitem, Queue *pq);
void EmptyTheQueue(Queue *pq);
#endif
