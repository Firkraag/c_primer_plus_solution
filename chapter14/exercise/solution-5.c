/*************************************************************************
	> File Name: solution-5.c
	> Author: 
	> Mail: 
	> Created Time: Sun Sep  8 08:07:36 2019
 ************************************************************************/
/* Write a program that fits the following recipe:
 * a. Externally define a name structure template with two members: a string to hold the first name and a string to hold the second name.
 * b. Externally define a student structure template with three members: a name structure, 
 *    a grade array to hold three floating-point scores, and a variable to hold the average of those three scores.
 * c. Have the main() function declare an array of CSIZE (with CSIZE = 4) student structures and initialize the name portions to names of your choice. 
 *    Use functions to perform the tasks described in parts d., e., f., and g.
 * d. Interactively acquire scores for each student by prompting the user with a student name and a request for scores. 
 *    Place the scores in the grade array portion of the appropriate structure. The required looping can be done in main() or in the function, as you prefer.
 * e. Calculate the average score value for each structure and assign it to the proper member.
 * f. Print the information in each structure.
 * g. Print the class average for each of the numeric structure members.
*/
#include <stdio.h>
#include <iso646.h>
#define CSIZE 4
struct name {
    char fname[20];
    char lname[20];
};

struct student {
    struct name name;
    float grades[3];
    float average_grade;
};

void input_scores(struct student *);
void calculate_average_grade(struct student *);
void print_info(struct student *);
void print_class_average(struct student students[], int n);
int main(void) {
    struct student students[CSIZE] = {
        {
            .name = {"Ross", "Geller"},
        },
        {
            .name = {"Monica", "Geller"},
        },
        {
            .name = {"Rachel", "Green"},
        },
        {
            .name = {"Chandler", "Bing"},
        },
    };
    for (int i = 0;i < CSIZE ;i++)
    {
        input_scores(&students[i]);
        calculate_average_grade(&students[i]);
    }
    for (int i = 0;i < CSIZE ;i++)
    {
        print_info(&students[i]);
    }
    print_class_average(students, CSIZE);

    return 0;
}

void input_scores(struct student *ptr)
{
    printf("%s %s: Please enter your three scores: ", ptr->name.fname, ptr->name.lname);
    scanf("%f %f %f", &ptr->grades[0], &ptr->grades[1], &ptr->grades[2]);
}

void calculate_average_grade(struct student *ptr)
{
    ptr->average_grade = (ptr->grades[0] + ptr->grades[1] + ptr->grades[2]) / 3.0;
}

void print_info(struct student *ptr)
{
    printf("%s %s: Your three scores are %f %f %f, and your average grade is %f \n", ptr->name.fname, ptr->name.lname, ptr->grades[0], ptr->grades[1], ptr->grades[2], ptr->average_grade);
}

void print_class_average(struct student students[], int n)
{
    float average_grades[3];
    for (int i = 0;i < 3 ;i++)
    {
        average_grades[i] = 0;
        for (int j = 0;j < n ;j++)
        {
            average_grades[i] += students[j].grades[i];
        }
    }
    printf("The class average grades are %f %f %f respectively\n", average_grades[0] / n, average_grades[1] / n, average_grades[2] / n);
}
