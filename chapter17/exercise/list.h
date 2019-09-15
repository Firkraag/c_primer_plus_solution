/*************************************************************************
	> File Name: list.h
	> Author: 
	> Mail: 
	> Created Time: Sat Sep 14 20:30:41 2019
 ************************************************************************/

#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>
#define TSIZE 45
#define MAXSIZE 100
struct film 
{
    char title[TSIZE];
    int rating;
};
typedef struct film Item;
typedef struct node 
{
    Item item;
    struct node *next;
} Node;
typedef struct list
{
    Item entries[MAXSIZE];
    int items;
} List;
//typedef struct 
//{
 //   Node *head;
  //  Node *end;
//} List;
void InitializeList(List *plist);
bool ListIsEmpty(const List *plist);
bool ListIsFull(const List *plist);
unsigned int ListItemCount(const List *plist);
bool AddItem(Item item, List *plist);
void Traverse(const List *plist, void (*pfunc)(Item item));
void EmptyTheList(List *plist);
#endif
