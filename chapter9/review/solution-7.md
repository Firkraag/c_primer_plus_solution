# Problem
Is anything wrong with this function definition?
```
void salami(num) {
    int num, count;
    for (count = 1; count <= num; num++) 
        printf(" O salami mio!\n");
}
```

# Solution
Formal parameter `num` has no type.