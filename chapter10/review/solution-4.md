# Problem
What is the value of `*ptr` and of `*(ptr + 2)` in each case?

a.
```
int *ptr;
int torf[2][2] = {12, 14, 16}; 
ptr = torf[0];
```
b.
```
int * ptr;
int fort[2][2] = { {12}, {14,16} };
ptr = fort[0];
```
# Solution
a.
the value of `*ptr` is 12

the value of `*(ptr + 2)` is 16

b.
the value of `*ptr` is 12

the value of `*(ptr + 2)` is 14