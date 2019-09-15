/*************************************************************************
	> File Name: tree.c
	> Author: 
	> Mail: 
	> Created Time: Sun Sep 15 13:10:36 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>
#include "tree.h"

static Trnode *MakeNode(const Item *pi);
static void AddNode(Trnode *new_node, Trnode *root);

bool AddItem(const Item *pi, Tree *ptree)
{
    Trnode *new_node;

    if (TreeIsFull(ptree))
    {
        fprintf(stderr, "Tree is full\n");
        return false;
    }
    if (SeekItem(pi, ptree).child != NULL)
    {
        fprintf(stderr, "Attempted to add duplicate item\n");
        return false;
    }
    new_node = MakeNode(pi);
    if (new_node == NULL)
    {
        fprintf(stderr, "Couldn't create node\n");
        return false;
    }
    ptree->size++;
    if (ptree->root == NULL)
    {
        ptree->root = new_node;
    }
    else
    {
        AddNode(new_node, ptree->root);
    }
    return true;
}

static Trnode *MakeNode(const Item *pi)
{
    Trnode *new_node;

    new_node = (Trnode *) malloc(sizeof(Trnode));
    if (new_node != NULL)
    {
        new_node->item = *pi;
        new_node->left = NULL;
        new_node->right = NULL;
    }
    return new_node;
}
static void AddNode(Trnode *new_node, Trnode *root)
{
    if (ToLeft(&new_node->item, &root->item))
    {
        if (root->left == NULL)
        {
            root->left = new_node;
        }
        else
        {
            AddNode(new_node, root->left);
        }
    }
    else if (ToRight(&new_node->item, &root->item))
    {
        if (root->right == NULL)
        {
            root->right = new_node;
        }
        else
        {
            AddNode(new_node, root->right);
        }
    }
    else
    {
        fprintf(stderr, "location error in AddNode()\n");
        exit(1);
    }
}
