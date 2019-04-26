# Problem
What’s wrong with this program?

    #include <stdio.h> 
    int main(void)
    {
        char ch; 
        int lc = 0;  /* lowercase char count
        nt uc = 0; /* uppercase char count
        int oc = 0; /* other char count
        while ((ch = getchar()) != '#') 
        {
            if ('a' <= ch >= 'z') 
                lc++;
            else if (!(ch < 'A') || !(ch > 'Z') 
                uc++;
            oc++; 
        }
        printf(%d lowercase, %d uppercase, %d other, lc, uc, oc);
        return 0; 
    }

# Solution

    #include <stdio.h> 
    int main(void)
    {
        char ch; 
        int lc = 0;  /* lowercase char count
        nt uc = 0; /* uppercase char count
        int oc = 0; /* other char count
        while ((ch = getchar()) != '#') 
        {
            if (('a' <= ch) && (ch <= 'z'))
                lc++;
            else if (('A' <= ch) || (ch > 'Z'))
                uc++;
            oc++;
        }
        printf("%d lowercase, %d uppercase, %d other", lc, uc, oc);
        return 0; 
    }