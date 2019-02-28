# Problem
Modify the last program so that it prints the letters a through g instead.
# Solution

    #include <stdio.h>
    #define end 'g'
    int main(void)
    {
        char c = 'a';
        while (c <= end)
            printf("%5c", c++);
        printf("\n");
        return 0;
    }
    


