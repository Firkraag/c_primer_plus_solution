# Problem
What’s wrong with this program?
```
#include <stdio.h>
int main(int argc, char argv[])
{
    printf("The square root of %f is %f\n", argv[1], sqrt(argv[1]) );
}
```
# Solution
- The `argv` argument should be declared as type `char *argv[]`
- The header file maths.h is not included
- `sqrt` receives a `double` argument and returns a `double`, 
so argv[1] must be converted to double when used as argument to `sqrt`
- The first `%f` requires the corresponding argument to `printf` to be a `float` or `double`.
