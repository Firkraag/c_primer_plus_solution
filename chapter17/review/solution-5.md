# Problem
The stack is another data form from the list family. In a stack, additions and deletions
can be made from only one end of the list. Items are said to be “pushed onto” the top of
the stack and to be “popped off” the stack. Therefore, the stack is a LIFO structure (that
is, last in, first out ).

a. Devise an ADT for a stack.

b. Devise a C programming interface for a stack, i.e., a stack.h header file.
# Solution
a.

Type Name: Stack
Type Properties: Can hold an ordered sequence of items.
Type Operations: Initialize stack to empty.
                 Determine whether stack is empty.
                 Determine whether stack is full.
                 Determine number of items in the stack.
                 Push item onto the top of the stack.
                 Pop the item on the top of the stack.
                 Empty the stack.

b.

```
#ifndef STACK_H_
#define STACK_H_
#include <stdbool.h>

//typedef int Item;
typedef struct 
{
    long arrive;
    int processtime;
} Item;

#define MAXSTACK 10
typedef struct node
{
    Item item;
    struct node *next;
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
```
