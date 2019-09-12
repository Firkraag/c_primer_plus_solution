# Problem
Define the `EVEN_GT(X,Y)` macro, which returns 1 if `X` is even and also greater than `Y` .
# Solution
```
#define EVEN_GT(X, Y) ((((X) % 2) == 0) && ((X) > (Y)))
```
