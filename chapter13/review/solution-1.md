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
