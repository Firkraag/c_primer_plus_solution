/*************************************************************************
	> File Name: division_truncation.c
	> Author: 
	> Mail: 
	> Created Time: Sun Mar 17 13:59:39 2019
 ************************************************************************/

#include <stdio.h>

int main(void) {
    printf("integer division: 5 / 4 is %d \n", 5 / 4);
    printf("integer division: 6 / 3 is %d \n", 6 / 3);
    printf("integer division: 7 / 4 is %d \n", 7 / 4);
    printf("floating division: 7. / 4. is %1.2f \n", 7. / 4.);
    printf("mixed division: 7. / 4 is %1.2f \n", 7. / 4);

    printf("11 / 5 = %d, 11 %% 5 = %d\n", 11 / 5, 11 % 5);
    printf("11 / -5 = %d, 11 %% -2 = %d\n", 11 / -5, 11 % -2);
    printf("-11 / -5 = %d, -11 %% -5 = %d\n", -11 / -5, -11 % -5);
    printf("-11 / 5 = %d, -11 %% 5 = %d\n", -11 / 5, -11 % 5);
    printf("-111 %% 11 = %d\n", -111 % 10);

    return 0;
}
