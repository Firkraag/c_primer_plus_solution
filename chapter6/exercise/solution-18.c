/*************************************************************************
	> File Name: solution-18.c
	> Author: 
	> Mail: 
	> Created Time: Sun 31 Mar 2019 02:32:00 AM CST
 ************************************************************************/

#include <stdio.h>
#define RabnudInitialFriendNumber 5
#define DunbarFriendNumber 150
/* Professor Rabnud joined a social media group. Initially he had five friends. He noticed
that his friend count grew in the following fashion. The first week one friend dropped
out and the remaining number of friends doubled. The second week two friends dropped
out and the remaining number of friends doubled. In general, in the Nth week, N friends
dropped out and the remaining number doubled. Write a program that computes and
displays the number of friends each week. The program should continue until the count
exceeds Dunbar’s number. Dunbar’s number is a rough estimate of the maximum size of
a cohesive social group in which each member knows every other member and how they
relate to one another. Its approximate value is 150. 
*/
int main(void) {
    int week = 1, Rabnud_friend_number = RabnudInitialFriendNumber;    

    do {
        Rabnud_friend_number = (Rabnud_friend_number - week) * 2;
        printf("Week %d, Rabnud friend number is %d\n", week++, Rabnud_friend_number);
    } while (Rabnud_friend_number <= DunbarFriendNumber); 
}
