/*************************************************************************
	> File Name: solution-2.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jul  7 16:47:48 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <assert.h>




int main(void) {
    void chline(char, int, int);
    chline('a', 2, 4);
    putchar('\n');
    chline('b', 3, 5);
    putchar('\n');
    chline('c', 0, 4);

}
/* Devise a function chline(ch,i,j) that prints the requested character in columns i
through j. Test it in a simple driver.
 */
void chline(char ch, int i, int j)
{
    assert(i > 0);
    assert(j > 0);
    assert(i <= j);
    for (int col = 1; col < i; col++)
    {
        putchar(' ');
    }
    for (int col = i; col <= j; col++)
    {
        putchar(ch);
    }
}
