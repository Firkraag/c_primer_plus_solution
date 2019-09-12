# Problem
Define a macro that prints the name, value, and address of an int variable in the
following format:
name: fop; value: 23; address: ff464016
# Solution
```
#define PRINT_INFO(X) printf("name: " #X "; value: %d; address: %p\n", X, &X)
```
