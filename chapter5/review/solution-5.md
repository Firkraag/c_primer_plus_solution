# Problem
Here’s an alternative design for Listing 5.9. It appears to simplify the code by replacing the two `scanf()` statements in Listing 5.9 with a single `scanf()` statement. What makes this design inferior to the original?

    #include <stdio.h> 
    #define S_TO_M 60 
    int main(void)
    {
        int sec, min, left;
        printf("This program converts seconds to minutes and "); 
        printf("seconds.\n");
        printf("Just enter the number of seconds.\n"); 
        printf("Enter 0 to end the program.\n");
        while (sec > 0) {
            scanf("%d", &sec);
            min = sec/S_TO_M;
            left = sec % S_TO_M;
            printf("%d sec is %d min, %d sec. \n", sec, min, left); 
            printf("Next input?\n");
        } 
        printf("Bye!\n"); 
        return 0;
    }
    

# Solution
1. No initialize variable `sec`
1. print before validate the input


