# Problem
The `QueueIsEmpty()` function took a pointer to a queue structure as an argument, but
it could have been written so that it took a queue structure rather than a pointer as an
argument. What are the advantages and disadvantages of each approach?
# Solution
It is usaually faster to take a pointer as argument since you don't copy an entire structure.

Since argument is passed by value in C, modifying parameters in called function doesn't affect arguments in calling function.