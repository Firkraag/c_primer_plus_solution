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
variable `plink` cannot be used in other source files, `arr` points to array of integers, and the program will not be allowed to use `arr` to alter the values in the array. 

b. `const int value` and `const int n` enhance the protection of values in the called function, but not in the calling program.

