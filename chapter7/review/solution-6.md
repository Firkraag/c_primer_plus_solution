# Problem
What will the following program print?

    #include <stdio.h> 
    int main(void)
    {
        int i = 0;
        while ( i < 3) { 
            switch(i++) {
                case 0 : printf("fat "); 
                case 1 : printf("hat "); 
                case 2 : printf("cat "); 
                default: printf("Oh no!");
            }
            putchar('\n'); 
        }
        return 0; 
    }

# Solution

    fat hat cat Oh no!
    hat cat Oh no!
    cat Oh no!
