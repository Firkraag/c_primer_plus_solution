/*************************************************************************
	> File Name: solution-6.c
	> Author: 
	> Mail: 
	> Created Time: Sun Sep  8 19:47:44 2019
 ************************************************************************/
/* A text file holds information about a softball team. Each line has data arranged as follows:
 * 4 Jessie Joybat 5 2 1 1
 * The first item is the player's number, conveniently in the range 0-18. The second item is
 * the player's first name, and the third is the player's last name. Each name is a single word.
 * The next item is the player's official times at bat, followed by the number of hits, walks, and
 * runs batted in (RBIs). The file may contain data for more than one game, so the same player may
 * have more than one line of data, and there may be data for other players between those lines. Write
 * a program that stores the data into an array of structures. 
 * The structure should have members to represent the first and last names, the at bats, hits, walks, and
 * RBI (runs batted in), and the batting average (to be calculated later). You can use the player numbers as
 * an array index. The program should read to end-of-file, and it should keep cumulative totals for each player.
 * 
 * The world of baseball statistics is an involved one. For example, a walk or reaching base on an error
 * doesn't count as at-bat but could possibly produce an RBI. But all this program has to do is read and process
 * the data file, as described next, without worrying about how realistic the data is.
 * 
 * The simplest way for the program to proceed is to initialize the structure contents to zeros, 
 * read the file data into temporary variables, and then add them to the contents of the corresponding structure. 
 * After the program has finished reading the file, it should then calculate the batting average for each player and
 * store it in the corresponding structure member. The batting average is calculated by dividing the cumulative number of 
 * hits for a player by the cumulative number of at-bats; it should be a floating-point calculation. 
 * The program should then display the cumulative data for each player along with a line showing the combined statistics 
 * for the entire team.
 */
#include <stdio.h>
#include <iso646.h>
#define NAME_SIZE 20
#define PLAYER_NUMBER_MAX 18
#define PLAYER_NUMBER_MIN 0
struct player 
{
    char first_name[NAME_SIZE];
    char last_name[NAME_SIZE];
    int at_bats;
    int hits;
    int walks;
    int rbi;
    double batting_average;
};

int main(void) {
    struct player players[PLAYER_NUMBER_MAX + 1];

    for (int i = PLAYER_NUMBER_MIN;i < PLAYER_NUMBER_MAX + 1;i++)
    {
        players[i].at_bats = 0;
        players[i].hits = 0;
        players[i].walks = 0;
        players[i].rbi = 0;
        players[i].batting_average = 0;
    }

    int player_number;
    FILE *fp = fopen("softball.info", "r");
     
    while (fscanf(fp, "%d", &player_number) == 1 and player_number >= PLAYER_NUMBER_MIN and player_number <= PLAYER_NUMBER_MAX)
    {
        struct player *ptr = &players[player_number];
        int at_bats;
        int hits;
        int walks;
        int rbi;
        fscanf(fp, "%s %s %d %d %d %d", ptr->first_name, ptr->last_name, &at_bats, &hits, &walks, &rbi);
        ptr->at_bats += at_bats;
        ptr->hits += hits;
        ptr->walks += walks;
        ptr->rbi += rbi;
    } 
    for (int i = PLAYER_NUMBER_MIN;i < PLAYER_NUMBER_MAX;i++)
    {
        if (players[i].at_bats)
        {
            players[i].batting_average = players[i].hits * 1.0 / players[i].at_bats;
        }
        printf("Player %d has batting average of %f\n", i, players[i].batting_average);
    }
    int total_at_bats = 0;
    int total_hits = 0;
    for (int i = PLAYER_NUMBER_MIN;i < PLAYER_NUMBER_MAX;i++)
    {
        total_at_bats += players[i].at_bats;
        total_hits += players[i].hits;
    }
    printf(" Team has batting average of %f\n", total_hits * 1.0 / total_at_bats);
    fclose(fp);

    return 0;

}
