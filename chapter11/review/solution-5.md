# Problem
The following provides practice with strings, loops, pointers, and pointer incrementing. First, suppose you have this function definition:
```
#include <stdio.h> 

char *pr (char *str) {
    char *pc;
    pc = str; 
    while (*pc)
        putchar(*pc++); 
    do {
        putchar(*--pc);
    } while (pc - str); 
    return (pc);
}
```
Consider the following function call:

`x = pr("Ho Ho Ho!");`

a. What is printed?

b. What type should x be?

c. What value does x get?

d. What does the expression `*--pc` mean, and how is it different from `--*pc`?

e. What would be printed if `*--pc` were replaced with `*pc--`?

f. What do the two `while` expressions test for?

g. What happens if `pr()` is supplied with a null string as an argument?

h. What must be done in the calling function so that `pr()` can be used as shown?

# Solution
a. 

`Ho Ho Ho!!oH oH oH`

b.

`char *`

c.

The address of actual argument of pr, that is "Ho Ho Ho!".

d.

`*--pc` dereferences the memory address one bytes before `pc` points to, then decrement `pc`

`--*pc` decrement the value `pc` dereferences.

e.

`Ho Ho Ho!!oH oH o`

f.
The first loop iterates from start of string to null terminator.

The second loop iterates from the end of string(null terminator) back to the start of string.

