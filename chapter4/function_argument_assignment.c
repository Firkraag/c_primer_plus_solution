#include <stdio.h>

void foo(int a)
{
    printf("%d\n", a);
}
int main(void) {
    foo(a = 1);
}
