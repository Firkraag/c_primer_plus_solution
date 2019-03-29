# Problem
What will each of the following programs print?
 
a.

     #include <stdio.h>
     int main(void)
     {
         int i = 0;
         while (++i < 4)
            printf("Hi! ");
         do
            printf("Bye! ");
         while (i++ < 8);
         return 0;
     }
 b.
     
     #include <stdio.h>
     int main(void)
     {
         int i;
         char ch;
         for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * i)
            printf("%c", ch);
         return 0;
     } 


# Solution

a.

    Hi! Hi! Hi! Bye! Bye! Bye! Bye! Bye! 

b.

    ACGM
    
