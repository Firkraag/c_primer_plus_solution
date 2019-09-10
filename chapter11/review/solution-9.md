# Problem 
The `s_gets()` function defined in this chapter can be written in pointer notation instead of array notation so as to eliminate the variable `i`. Do so.

# Solution

```
char * s_gets(char * st, int n) 
{
    char * ret_val; 
    
    ret_val = fgets(st, n, stdin); 
    if (ret_val)
    {
        while (*st != '\n' && *st != '\0') 
            st++;
        if (*st == '\n') 
            *st = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
    return ret_val; 
}
```