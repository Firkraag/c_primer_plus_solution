/*************************************************************************
	> File Name: stack.h
	> Author: 
	> Mail: 
	> Created Time: Mon Sep 16 13:29:42 2019
 ************************************************************************/

#ifndef STACK_H_
#define STACK_H_
#include <stdbool.h>
#define MAXSTACK 10

//typedef int Item;
typedef char * Item;

typedef struct node
{
    Item item;
    struct node *prev;
} Node;

typedef struct 
{
    Node *top;
    int items;
} Stack;

void InitializeStack(Stack *ps);
bool StackIsFull(const Stack *ps);
bool StackIsEmpty(const Stack *ps);
int StackItemCount(const Stack *ps);
bool StackPush(Item item, Stack *ps);
bool StackPop(Item *pitem, Stack *ps);
void EmptyTheStack(Stack *ps);
#endif
