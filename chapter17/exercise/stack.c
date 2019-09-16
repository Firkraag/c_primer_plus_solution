/*************************************************************************
	> File Name: stack.c
	> Author: 
	> Mail: 
	> Created Time: Mon Sep 16 13:32:16 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include "stack.h"
static void CopyToNode(Item item, Node *pn);
static void CopyToItem(Node *pn, Item *pi);
void InitializeStack(Stack *ps)
{
    ps->top = NULL;
    ps->items = 0;
}

bool StackIsFull(const Stack *ps)
{
    return ps->items == MAXSTACK;
}
bool StackIsEmpty(const Stack *ps)
{
    return ps->items == 0;
}

int StackItemCount(const Stack *ps)
{
    return ps->items;
}

bool StackPush(Item item, Stack *ps)
{
    Node *node;

    if (StackIsFull(ps))
    {
        return false;
    }
    node = (Node *) malloc(sizeof(Node));
    if (node == NULL)
    {
        fprintf(stderr, "Unable to allocate memory!\n");
        exit(1);
    }
    CopyToNode(item, node);

    if (ps->top == NULL )
    {
        ps->top = node;
        node->prev = NULL;
    }
    else
    {
        node->prev = ps->top;
        ps->top = node;
    }
    ps->items++;
    return true;
}
bool StackPop(Item *pitem, Stack *ps)
{
    Node *node;
    if (StackIsEmpty(ps))
    {
        return false;
    }
    CopyToItem(ps->top, pitem);
    node = ps->top;
    ps->top = node->prev;
    free(node);
    ps->items--;
    return true;
}
    
void EmptyTheStack(Stack *ps)
{
    Item dummy;
    while (!StackIsEmpty(ps))
    {
        StackPop(&dummy, ps);
    } 
}
static void CopyToNode(Item item, Node *pn)
{
    pn->item = item;
}

static void CopyToItem(Node *pn, Item *pi)
{
    *pi = pn->item;
}

