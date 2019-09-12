# Problem
Devise a function called `alter()` that takes two `int` variables, `x` and `y`, and changes their values to their sum and their difference, respectively.
# Solution
```
void alter(int *xptr, int *yptr)
{
    int tmp = *xptr - *yptr;
    
    *xptr = *xptr + *yptr;
    *yptr = tmp;
}
```