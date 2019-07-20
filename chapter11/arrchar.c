/*************************************************************************
	> File Name: arrchar.c
	> Author: 
	> Mail: 
	> Created Time: Wed Jul 17 09:58:44 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#define SLEN 40
#define  LIM 5

/* array of pointers, array of strings
 */
int main(void) {
    const char *mytalents[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately", 
        "Stashing data", 
        "Following instructions to the letter",
        "Understanding the C language",
    };

    char yourtalents[LIM][SLEN] = {
        "Walking in a straight line", 
        "Sleeping", 
        "Watching television", 
        "Mailing letters", 
        "Reading email",
    };
    int i;

    puts("Let's compare talents.");
    printf("%-36s %-25s\n", "My Talents", "Your Talents");
    for (i = 0;i < LIM;i++)
    {
        printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
    }
    printf("\nsizeof mytalents: %zd, sizeof yourtalents; %zd\n", sizeof(mytalents), sizeof(yourtalents));

    return 0;
}
