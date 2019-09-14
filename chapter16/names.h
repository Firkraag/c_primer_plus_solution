/*************************************************************************
	> File Name: names.h
	> Author: 
	> Mail: 
	> Created Time: Thu Sep 12 20:19:32 2019
 ************************************************************************/
/* Listing 16.10 -- revised with include protection
 */
#ifndef NAMES_H_
#define NAMES_H_
#define SLEN 32
struct names_st
{
    char first[SLEN];
    char last[SLEN];
};
typedef struct names_st names;
void get_names(names *);
void show_names(const names *);
char *s_gets(char *st, int n);
#endif
