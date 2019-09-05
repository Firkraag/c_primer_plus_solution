# Problem
Consider this code fragment:

`int * p1 = (int *) malloc(100 * sizeof(int));`

In terms of the final outcome, how does the following statement differ?

`int * p1 = (int *) calloc(100, sizeof(int));`
# Solution
Two statements both allocate memory of size `100 * sizeof(int)` and assign `p1` the lowest address of allocated memory.

Besides, `calloc` initializes all bytes in the allocated memory to zero.
