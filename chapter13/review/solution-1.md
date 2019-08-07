# Problem
What’s wrong with this program?
```
int main(void) {
    int * fp; 
    int k;

    fp = fopen("gelatin"); 
    for (k = 0; k < 30; k++)
        fputs(fp, "Nanette eats gelatin."); 
    fclose("gelatin");
    return 0;
}
```

# Solution
- Return type of `fopen` is `FILE *`.
- `fopen` receives two arguments, the first one is of type `const char *filename`, the second one is of type `const char *mode`
- `fputs` receives two arguments, the first one is of type `const char *str`, the second one is of type `FILE          *stream`
- `fclose` receives one argument of type `FILE *`