# Problem
Write a program that takes two command-line arguments. The first is a character, and
the second is a filename. The program should print only those lines in the file containing the given character.
# Solution
```
#include <stdio.h>
#include <iso646.h>
#include <string.h>

#define MAX 1000


int main(int argc, char *argv[]) {
    FILE *fp = fopen(argv[2], "r");
    char ch = argv[1][0];
    char string[MAX];

    while (fgets(string, MAX, fp))
    {
        if (strchr(string, ch))
        {
            printf("%s", string);
        }
    }
    fclose(fp); 
    return 0;
}
```
