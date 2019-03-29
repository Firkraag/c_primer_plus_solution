# Problem
Given the input `Go west, young man!`, what would each of the following programs
produce for output? (The ! follows the space character in the ASCII sequence.)
 
a.

     #include <stdio.h>

     int main(void)
     {
         char ch;
         scanf("%c", &ch);
         while ( ch != 'g' )
         {
             printf("%c", ch);
             scanf("%c", &ch);
         }
         return 0;
     }
     
 b.

     #include <stdio.h>
     int main(void)
     {
         char ch;
         scanf("%c", &ch);
         while ( ch != 'g' )
         {
             printf("%c", ++ch);
             scanf("%c", &ch);
         }
         return 0;
     }

c.

     #include <stdio.h>
     int main(void)
     {
         char ch;
         do {
             scanf("%c", &ch);
             printf("%c", ch);
         } while ( ch != 'g' );
         return 0;
     }
 d.
     
     #include <stdio.h>
     int main(void)
    
     {
         char ch;
         scanf("%c", &ch);
         for ( ch = '$'; ch != 'g'; scanf("%c", &ch) )
            printf("%c", ch);
         return 0;
     } 

# Solution
a.

    Go west, youn

b.

    Hp!xftu-!zpvo

c.

    
    Go west, young

d.

    $o west, youn