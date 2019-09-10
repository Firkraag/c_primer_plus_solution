# Problem
Rewrite the program in Review Question 9 so that it exhibits the same behavior but does not use a continue or a goto.

# Solution

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
    int main(void) {
        char ch;
        
        while ((ch = getchar()) != '#') {
            if (ch != '\n') {
                printf("Step 1\n");
                if (ch == 'c') {
                    ;
                }
                else if (ch == 'b') {
                    break;
                }
                else if (ch == 'h') {
                    printf("Step 3\n"); 
                }
                else {
                    printf("Step 2\n");
                    printf("Step 3\n"); 
                }
            }
        }
        printf("Done\n");

        return 0;

    }