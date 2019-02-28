# Problem
If the following fragments were part of a complete program, what would they print?
a.

    int x = 0;
    while (++x < 3)     
        printf("%4d", x);
b.

    int x = 100; 
    while (x++ < 103)
        printf("%4d\n",x);  
        printf("%4d\n",x);
c.

    char ch = 's';
    while (ch < 'w') {
        printf("%c", ch);
        ch++; 
    }
    printf("%c\n",ch);
    
# Solution
a.
    
       1   2
       
b.
    
     101
     102
     103
     104
     
c.

    stuvw




