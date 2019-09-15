/*************************************************************************
	> File Name: solution-3.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Sep 2019 03:20:13 AM CST
 ************************************************************************/
/* Suppose list.h ( Listing 17.3 ) uses the following definition of a list:
 * #define MAXSIZE 100
 * typedef struct list
 * {
 *      Item entries[MAXSIZE];
 *      int items;
 * } List;
 *
 * Rewrite the list.c ( Listing 17.5 ) functions to fit this definition and test the resulting
 * code with the films3.c ( Listing 17.4 ) program 
 */
#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include "list.h"

void InitializeList(List *plist)
{
    plist->items = 0;
}

bool ListIsEmpty(const List *plist)
{
    return plist->items == 0;
}

bool ListIsFull(const List *plist)
{
    return plist->items == MAXSIZE;
}

unsigned ListItemCount(const List *plist)
{
    return plist->items;
}

bool AddItem(Item item, List *plist)
{
    if ( plist->items >= MAXSIZE)
    {
        return false;
    }
    plist->entries[plist->items++] = item;
    return true;
}

void Traverse(const List *plist, void (*pfun)(Item item))
{
    for (int i = 0; i < plist->items; i++)
    {
        (*pfun)(plist->entries[i]);
    } 
}

void EmptyTheList(List *plist)
{
    plist->items = 0;
}

