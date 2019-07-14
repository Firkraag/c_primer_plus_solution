# Problem
What will this program print?
```
#include <stdio.h> 
#include <string.h> 

int main(void)
{
    char food[] = "Yummy"; 
    char *ptr;
    ptr = food + strlen(food); 
    while (--ptr >= food)
        puts(ptr); 
    return 0;
}
```

# Solution
```
y
my
mmy
ummy
Yummy
```