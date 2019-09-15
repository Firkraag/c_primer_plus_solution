/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Sep 2019 03:01:24 AM CST
 ************************************************************************/
/* Suppose list.h ( Listing 17.3 ) uses the following definition of a list:
 * typedef struct list
 * { 
 *    Node * head; 
 *    Node * end; 
 * } List;
 * Rewrite the list.c ( Listing 17.5 ) functions to fit this definition 
 * and test the resulting code with the films3.c ( Listing 17.4 ) program. 
 */
#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include "list.h"
static void CopyToNode(Item item, Node *pnode);

void InitializeList(List *plist)
{
    plist->head = NULL;
    plist->end = NULL;
}

bool ListIsEmpty(const List *plist)
{
    return plist->head == NULL;
}

bool ListIsFull(const List *plist)
{
    Node *pt;
    bool full;

    pt = (Node *) malloc(sizeof(Node));
    if (pt == NULL)
    {
        full = true;
    }
    else
    {
        full = false;
    }
    free(pt);
    return full;
}

unsigned ListItemCount(const List *plist)
{
    unsigned count = 0;
    Node *pnode = plist->head;

    while (pnode != NULL)
    {
        ++count;
        pnode = pnode->next;
    } 

    return count;
}

bool AddItem(Item item, List *plist)
{
    Node *pnew;

    pnew = (Node *) malloc(sizeof(Node));
    if (pnew == NULL)
    {
        return false;
    }
    CopyToNode(item, pnew);
    pnew->next = NULL;
    if (plist->end == NULL)
    {
        plist->head = plist->end = pnew;
    }
    else
    {
        plist->end->next = pnew;
        plist->end = pnew;
    }
    return true;
}

void Traverse(const List *plist, void (*pfun)(Item item))
{
    Node *pnode = plist->head;
    while (pnode != NULL)
    {
        (*pfun)(pnode->item);
        pnode = pnode->next;
    } 
}

void EmptyTheList(List *plist)
{
    Node *psave;
    Node *pnode = plist->head;
    
    while (pnode != NULL)
    {
        psave = pnode->next;
        free(pnode);
        pnode = psave;
    } 
}

static void CopyToNode(Item item, Node *pnode)
{
    pnode->item = item;
}
