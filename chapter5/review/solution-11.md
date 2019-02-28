# Problem

What will the following program print?

    #define MESG "COMPUTER BYTES DOG" 
    #include <stdio.h>
    int main(void)
    {
        int n = 0;
        while ( n < 5 ) 
            printf("%s\n", MESG); 
            n++;
        printf("That's all.\n");
        return 0; 
    }

# Solution
Print `COMPUTER BYTES DOG` indefinitely until you kill the program.

