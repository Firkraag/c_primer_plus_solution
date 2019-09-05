/*************************************************************************
	> File Name: solution-8.c
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 30 12:57:58 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>
#include <stdlib.h>

/* Here’s part of a program:
 * // pe12-8.c
 * #include <stdio.h>
 * int * make_array(int elem, int val); 
 * void show_array(const int ar[], int n); 
 * int main(void)
 * {
 *   int * pa; 
 *   int size; 
 *   int value;
 *   printf("Enter the number of elements: "); 
 *   while (scanf("%d", &size) == 1 && size > 0) {
 *      printf("Enter the initialization value: "); 
 *      scanf("%d", &value);
 *      pa = make_array(size, value); 
 *      if (pa)
 *      {
 *        show_array(pa, size);
 *        free(pa); 
 *      }
 *      printf("Enter the number of elements (<1 to quit): "); 
 *  }
 *  printf("Done.\n");
 *  return  0; 
 * }
 *
 * Complete the program by providing function definitions for make_array() and show_array(). 
 * The make_array() function takes two arguments. 
 * The first is the number of elements of an int array, and the second is a value that is to be assigned to each element. 
 * The function uses malloc() to create an array of a suitable size, sets each element to the indicated value, 
 * and returns a pointer to the array. The show_array() function displays the contents, eight numbers to a line.
 */
int main(void)
{
    int *make_array(int size, int value);
    void show_array(const int *array, int size);
    int *pa; 
    int size; 
    int value;
    printf("Enter the number of elements: "); 
    while (scanf("%d", &size) == 1 && size > 0) {
        printf("Enter the initialization value: "); 
        scanf("%d", &value);
        pa = make_array(size, value); 
        if (pa)
        {
            show_array(pa, size);
            free(pa); 
        }
        printf("Enter the number of elements (<1 to quit): "); 
    }
    printf("Done.\n");
    return  0; 
}
 
void show_array(const int *array, int size)
{

    for (int i = 0;i < size;i++)
    {
        printf("%d%c", array[i], (i + 1) % 9 ? '\t':'\n');
    }

}

int *make_array(int size, int value)
{
    int *ptr = (int *) malloc(sizeof(int) * size);

    if (!ptr)
    {
        return NULL;
    }
    
    for (int i = 0;i < size;i++)
    {
        ptr[i] = value;
    }

    return ptr;
}
