# Problem
What will the following program print when given this input?

    q
    c
    h
    b
    #include <stdio.h> 
    int main(void)
    {
        char ch;
        while ((ch = getchar()) != '#') 
        {
            if (ch == '\n') 
                continue;
            printf("Step 1\n"); 
            if (ch == 'c')
                continue; 
            else if (ch == 'b')
                break;
            else if (ch == 'h')
                goto laststep; 
            printf("Step 2\n");
        laststep: printf("Step 3\n"); 
        }
        printf("Done\n");
        return 0;
    }

# Solution

    Step 1
    Step 2
    Step 3
    Step 1
    Step 1
    Step 3
    Step 1
    Done