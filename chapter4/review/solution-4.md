# Problem 
It’s find the error time!
    
    define B booboo 
    define X 10     
    main(int)
    {
        int age; 
        char name;
        printf("Please enter your first name."); 
        scanf("%s", name);
        printf("All right, %c, what's your age?\n", name);              
        scanf("%f", age);
        xp = age + X;
        printf("That's a %s! You must be at least %d.\n", B, xp);       
        rerun 0;
    }

# Solution

    #include <stdio.h>
    #define B "booboo"
    #define X 10

    int main(void)
    {
        int age;
        char name;
        int xp;
        printf("Please enter your first name.");
        scanf("%s", &name);
        printf("All right, %c, what's your age?\n", name);
        scanf("%d", &age);
        xp = age + X;
        printf("That's a %s! You must be at least %d.\n", B, xp);
        return 0;
    }
    
    


