# Problem
You suspect that the following program is not perfect. What errors can you find?

     #include <stdio.h>
     int main(void)
     { /* line 3 */
         int i, j, list(10); /* line 4 */

         for (i = 1, i <= 10, i++) /* line 6 */
         { /* line 7 */
              list[i] = 2*i + 3; /* line 8 */
              for (j = 1, j > = i, j++) /* line 9 */
                  printf(" %d", list[j]); /* line 10 */
              printf("\n"); /* line 11 */
         } /* line 12 */ 

# Solution
- line 4: array should use [], not ()
- line 6: init expression, test expression and update expression should separated by semicolon;array index starts at 0, so maximum index is array size - 1
- line 9: init expression, test expression and update expression should separated by semicolon; no space between > and =