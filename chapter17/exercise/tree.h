/*************************************************************************
	> File Name: tree.h
	> Author: 
	> Mail: 
	> Created Time: Sun Sep 15 12:58:15 2019
 ************************************************************************/

#ifndef TREE_H_
#define TREE_H_
#include <stdbool.h>
#include <string.h>
#define MAXITEMS 1000
//#define SLEN 20
#define SLEN 100
//typedef int Item;
typedef struct 
{
    char petname[SLEN];
    char petkind[SLEN];
} Pet;
typedef struct
{
    Pet pets[10];
    int number;
} Item;

//typedef struct
//{
    //char word[SLEN];
    //char count;
//} Item;
typedef struct trnode
{
    Item item;
    struct trnode *left;
    struct trnode *right;
} Trnode;

typedef struct 
{
    Trnode *root;
    int size;
} Tree;
void InitializeTree(Tree *ptree);
bool TreeIsEmpty(const Tree *ptree);
bool TreeIsFull(const Tree *ptree);
int TreeItemCount(const Tree *ptree);
bool AddItem(const Item *pi, Tree *ptree);
Item *GetItem(const Item *pi, const Tree *ptree);
bool InTree(const Item *pi, const Tree *ptree);
bool DeleteItem(const Item *pi, Tree *ptree);
void Traverse(const Tree *ptree, void (*pfun)(Item item));
void DeleteAll(Tree *ptree);

#endif
