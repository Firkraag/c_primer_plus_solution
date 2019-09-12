# Problem
The `s_gets()` function defined in this chapter can be written using `strchr()` instead of a while loop to find the newline. Do so.

# Solution

```
char * s_gets(char * st, int n) 
{
    char * ret_val; 
    
    ret_val = fgets(st, n, stdin); 
    if (ret_val)
    {
        char *pos = strchr(st,  '\n');
        if (pos)
            *pos = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
    return ret_val; 
}
```