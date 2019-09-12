#Problem
Define a macro that prints the name, value, and address of an int variable in the
following format:
name: fop; value: 23; address: ff464016
#Solution
```
#define PRINT_INFO(name, value, address) printf("name: %s; value: %d; address: %p", name, value, address)
```
