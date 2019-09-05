# Problem
What’s the difference among the following?
```
printf("Hello, %s\n", name); 
fprintf(stdout, "Hello, %s\n", name); 
fprintf(stderr, "Hello, %s\n", name);
```
# Solution
The first statement outputs formatted string to `stdout`

The second statement outputs formatted string to `stdout`

The third statment outputs formatted string to `stderr`
 