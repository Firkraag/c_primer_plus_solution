# Problem 
Here are three array declarations:
```
double trots[20]; 
short clops[10][30]; 
long shots[5][10][15];
```

a. Show a function prototype and a function call for a traditional `void` function that processes `trots` and also for a C function using a VLA.

b. Show a function prototype and a function call for a traditional `void` function that processes `clops` and also for a C function using a VLA.

c. Show a function prototype and a function call for a traditional `void` function that processes `shots` and also for a C function using a VLA.

# Solution
a. 

```
void foo(double trots[], int n);
foo(trots, n);
void foo(int n, double trots[n]);
foo(20, trots);
```

b.
```
void foo(short clops[][30], int rows);
foo(clops, 10);
void foo(int rows, int cols, short clops[rows][cols]);
foo(10, 30, clops);
```

c.
```
void foo(long shots[][10][15], int rows);
foo(shots, 5);
void foo(int x, int y, int z, long shots[x][y][z]);
foo(5, 10, 15, shots);
```

