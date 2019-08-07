# Problem
What would the following program do? (Assume it’s run in a command-line environment.)
```
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int ch; FILE *fp;
    if (argc < 2) 
        exit(EXIT_FAILURE);
    if ( (fp = fopen(argv[1], "r")) == NULL) 
        exit(EXIT_FAILURE);
    while ( (ch= getc(fp)) != EOF ) 
        if( isdigit(ch) )
            putchar(ch); 
    fclose (fp);
    return 0; 
}

```
# Solution
Output only digit characters from file specifed as first argument of command line.
