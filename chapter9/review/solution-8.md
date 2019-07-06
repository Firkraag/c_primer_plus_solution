# Problem
Write a function that returns the largest of three integer arguments.

# Solution
```
int three_largest(int x, int y, int z)
{
    int larger = x >= y ? x : y;
    return larger >= z ? larger : z;
}
```