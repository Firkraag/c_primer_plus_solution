# Problem
Write a program that takes zero command-line arguments or one command-line argument. If there is one argument, it is interpreted as the name of a file. If there is no argument, the standard input (stdin) is to be used for input. Assume that the input consists entirely of floating-point numbers. Have the program calculate and report the arithmetic mean (the average) of the input numbers.
# Solution

```
#include <stdio.h>
#include <iso646.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    double total = 0;
    double number;
    int count = 0;
    if (argc == 1)
    {
        fp = stdin;
    }
    else if (argc == 2)
    {
        fp = fopen(argv[1], "r");
    }
    while (fscanf(fp, "%lf", &number) == 1)
    {
        total += number;
        count++;
    }
    printf("The arithmetic mean of the input numbers is %f\n", total / count);

    return 0;
}
```