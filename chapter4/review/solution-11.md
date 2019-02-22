# Problem
What’s wrong with the following statement and how can you fix it?

    printf("The double type is %z bytes..\n", sizeof (double));

# Solution
    
    
    printf("The double type is %zd bytes..\n", sizeof (double));


