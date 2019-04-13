/*************************************************************************
	> File Name: break.c
	> Author: 
	> Mail: 
	> Created Time: Sat Apr 13 15:16:39 2019
 ************************************************************************/

#include <stdio.h>
#include <iso646.h>

/* uses break to exit a loopt
 */
int main(void) {
    float length, width;

    while (1)
    {
        printf("Enter the length of the rectangle:\n"); 
        if (scanf("%f", &length) != 1  )
        {
           break; 
        } 
        printf("Length = %0.2f:\n", length); 
        printf("Enter its width:\n"); 
        if (scanf("%f", &width) != 1 )
        {
            break;
        } 
        printf("Width = %0.2f:\n", width); 
        printf("Area = %0.2f:\n", length * width); 
    } 
    printf("Done.\n"); 
    
    return 0;
}
