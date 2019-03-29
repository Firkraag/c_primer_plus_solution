# Problem
Mr. Noah likes counting by twos, so he’s written the following program to create an array
and to fill it with the integers 2, 4, 6, 8, and so on. What, if anything, is wrong with this
program?

     #include <stdio.h>
     #define SIZE 8
     int main(void)
     {
         int by_twos[SIZE];
         int index;
         for (index = 1; index <= SIZE; index++)
            by_twos[index] = 2 * index;
         for (index = 1; index <= SIZE; index++)
            printf("%d ", by_twos);
         printf("\n");
         return 0;
     } 

# Solution


- array index start at 0
- should print array element, not the array itself