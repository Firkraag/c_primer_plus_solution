# Problem
Design a function that takes a string pointer as an argument and returns a pointer to the first space character in the string on or after the pointed-to position. Have it return a null pointer if it finds no spaces.

# Solution
```
char *find_space(char *string)
{
    while (*string)
    {
        if (isspace(*string))
            return string;
        else
            string++;
    }
    return NULL;
}
```