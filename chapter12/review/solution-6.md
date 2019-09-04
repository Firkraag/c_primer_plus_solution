# Problem
Consider this code fragment:
```
int * p1 = (int *) malloc(100 * sizeof(int));
```
In terms of the final outcome, how does the following statement differ?
```
int * p1 = (int *) calloc(100, sizeof(int));
```
# Solution
`calloc` sets every bit of allocated memory to 0