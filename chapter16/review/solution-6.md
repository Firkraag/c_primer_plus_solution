# Problem
Create #define statements to accomplish the following goals:

a. Create a named constant of value 25 .

b. Have SPACE represent the space character.

c. Have PS() represent printing the space character.

d. Have BIG(X) represent adding 3 to X .

e. Have SUMSQ(X,Y) represent the sums of the squares of X and Y .

# Solution
```
#define NUM 25
#define SPACE ' '
#define PS() putchar(' ')
#define BIG(X) ((x) + 3)
#define SUMSQ(X,Y) (X) * (X) + (Y) * (Y)
```
