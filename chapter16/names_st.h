/*************************************************************************
	> File Name: names_st.h
	> Author: 
	> Mail: 
	> Created Time: Thu Sep 12 18:04:16 2019
 ************************************************************************/

#ifndef _NAMES_ST_H
#define _NAMES_ST_H
#include <string.h>
#define SLEN 32
struct names_st
{
    char first[SLEN];
    char last[SLEN];
};

typedef struct names_st names;
void get_names(names *);
void show_names(const names *);
char * s_gets(char *st, int n);
#endif
