# Problem
The `strlen()` function takes a pointer to a string as an argument and returns the length of the string. Write your own version of this function.

# Solution
```
int strlen(const char *string)
{
    char *ptr = string;
    while (*ptr++ != '\0')
        ;
    return ptr - string - 1;
}
```