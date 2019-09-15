# Problem
Why can the linked list in Listing 17.2 be traversed in only one direction? 
How could you modify the `struct film` definition so that the list could be traversed in both
directions?
# Solution
Because every `struct film` element has only a pointer to the next `struct film` element.

We can add a pointer to `struct film` to point to previous `struct film` element.
```
struct film
{
    char title[TSIZE];
    int rating;
    struct film *next;
    struct film *prev;
};
```

