# Problem
A file begins with the following declarations: 
```
static int plink;
int value_ct(const int arr[], int value, int n);
```
a. What do these declarations tell you about the programmer’s intent?

b. Will replacing `int value` and `int n` with `const int value` and `const int n`
enhance the protection of values in the calling program?

# Solution
a.
variable `plink` cannot be used in other source file, the value dereferenced by `arr` cannot be altered by pointer `arr`

b. `const int value` and `const int n` enhance the protection of values in the called function.
