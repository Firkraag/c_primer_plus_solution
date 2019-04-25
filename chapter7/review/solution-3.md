The following program has unnecessarily complex relational expressions as well as some outright errors. Simplify and correct it.

    #include <stdio.h>
    int main(void) /* 1 */
    { /* 2 */ 
        int weight, height; /* weight in lbs, height in inches */ 
                                                    /* 4 */ 
        scanf("%d , weight, height); /* 5 */
        if (weight < 100 && height > 64) /* 6 */ 
            if (height >= 72) /* 7 */
                printf("You are very tall for your weight.\n");
            else if (height < 72 && > 64) /* 9 */
                printf("You are tall for your weight.\n"); /* 10 */
        else if (weight > 300 && ! (weight <= 300) /* 11 */
                        && height < 48) /* 12 */
            if (!(height >= 48) ) /* 13 */
                printf(" You are quite short for your weight.\n");
        else /* 15 */ 
            printf("Your weight is ideal.\n"); /* 16 */ 
                /* 17 */
        return 0; 
    }

# Solution

    #include <stdio.h>
    int main(void) /* 1 */
    {    /* 2 */
        int weight, height; /* weight in lbs, height in inches */
                                                    /* 4 */
        scanf("%d %d", &weight, &height); /* 5 */
        if (weight < 100 && height > 64) {/* 6 */
            if (height >= 72) /* 7 */
                printf("You are very tall for your weight.\n");
            else
                printf("You are tall for your weight.\n");
        } /* 10 */
        else if (weight > 300 && height < 48) /* 12 */
            printf(" You are quite short for your weight.\n");
        else /* 15 */
            printf("Your weight is ideal.\n"); /* 16 */
                /* 17 */
        return 0;
    }