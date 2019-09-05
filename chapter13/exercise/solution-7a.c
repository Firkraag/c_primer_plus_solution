/*************************************************************************
	> File Name: solution-7b.c
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Sep 2019 10:18:46 PM CST
 ************************************************************************/

#include <stdio.h>
#define SIZE 1024
/* Writing a program that opens two files. You can obtain the filenames either by using
 * command-line arguments or by soliciting the user to enter them.
 * a. Have the program print line 1 of the first file, line 1 of the second file, 
 *    line 2 of the first file, line 2 of the second file, and so on, until the last line of 
 *    the longer file (in terms of lines) is printed.
 * b. Modify the program so that lines with same line number are printed on the same line.
 */
int main(int argc, char *argv[]) {
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s FILE1 FILE2", argv[0]);
    }
    FILE *const file1 = fopen(argv[1], "rb");
    FILE *const file2 = fopen(argv[2], "rb");
    char line1[SIZE];
    char line2[SIZE];
    while (fgets(line1, SIZE, file1) != NULL)
    {
        printf("%s", line1);
        if (fgets(line2, SIZE, file2) != NULL)
        {
            printf("%s", line2);
        }
    }
    while (fgets(line2, SIZE, file2) != NULL)
    {
        printf("%s", line2);
    }
    fclose(file1);
    fclose(file2);
}
