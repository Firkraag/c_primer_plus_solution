# Problem
What is the value of `**ptr` and of `**(ptr + 1)` in each case? 

a.
```
int (*ptr)[2];
int torf[2][2] = {12, 14, 16};
ptr = torf;
```

b.
```
int (*ptr)[2];
int fort[2][2] = { {12}, {14,16} };
ptr = fort;
```

# Solution
a.
the value of `**ptr` and of `**(ptr + 1)` is 