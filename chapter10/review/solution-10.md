# Problem
Suppose you have these declarations:
```
float rootbeer[10], things[10][5], *pf, value = 2.2; 
int i = 3;
```
Identify each of the following statements as valid or invalid:

a. `rootbeer[2] = value;`

b. `scanf("%f", &rootbeer );`

c. `rootbeer = value;`

d. `printf("%f", rootbeer);`

e. `things[4][4] = rootbeer[3];`

f. `things[5] = rootbeer;`

g. `pf = value;`

h. `pf = rootbeer;`

# Solution
a. valid

b. invalid; `rootbeer` is not a `float`

c. invalid; `rootbeer` is a constant

d. invalid; `rootbeer` is not a `float`

e. valid

f. invalid; cannot assign arrays

g. invalid; value is not address

h. valid

