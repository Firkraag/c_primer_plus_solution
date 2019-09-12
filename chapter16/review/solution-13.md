#Problem
Suppose `scores` is an array of 1000 int values that you want to sort into descending
order. And suppose you are using `qsort()` and a comparison function called `comp()` .
a. What is a suitable call to qsort() ?
b. What is a suitable definition for comp() ?
#Solution
a.
`qsort(scores, 1000, sizeof(int), comp)`

b.
```
int compare(const void *ptr1, const void *ptr2)
{
    int num1 = *((int *) ptr1);
    int num2 = *((int *) ptr2);
    return num2 - num1;
}
```s