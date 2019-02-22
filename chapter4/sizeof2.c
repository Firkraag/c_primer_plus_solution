/*************************************************************************
  > File Name: sizeof2.c
  > Author: 
  > Mail: 
  > Created Time: Thu Feb 21 17:23:40 2019
 ************************************************************************/

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main()
{
    short int sa=10;
    int a=10;
    long la=10;
    float f = 20;
    double d=20;
    long double ld=20;
    char ch='c';
    char str[]="ABC";
    char *p=str;
    struct str{
        double d;
        char ch;
        int data;
    }str_wu;
    struct str1{
        char ch;
        double d;
        int data;
    }str_wu1;
    printf("sizeof(short):%zd\n",sizeof(sa));
    printf("sizeof(int):%zd\n",sizeof(a));
    printf("sizeof(long):%zd\n",sizeof(la));
    printf("sizeof(float):%zd\n",sizeof(f));
    printf("sizeof(double):%zd\n",sizeof(d));
    printf("sizeof(long double):%zd\n",sizeof(ld));
    printf("sizeof(char):%zd\n",sizeof(ch));
    printf("sizeof(string):%zd\n",sizeof(str));
    printf("sizeof(point address):%zd\n",sizeof(p));
    printf("sizeof(Point):%zd\n",sizeof(*p));
    printf("sizeof(Struct):%zd\n",sizeof(str_wu)); // alignment is also counted
    printf("sizeof(Struct):%zd\n",sizeof(str_wu1));
    system("pause");
}
