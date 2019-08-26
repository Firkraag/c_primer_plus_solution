#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define STLEN 1


// 读取一行，如果包括换行符在内的字符数小于等于size - 1，则把换行符替换为'\0', 如果大于，则舍弃该行剩余字符
int readline_and_discard(char *s, int size, FILE *fp)
{
    assert(size > 0);
    int i = 0;
    int c = 'A';
    while (i < size - 1 && ((c = fgetc(fp)) != EOF) && c != '\n')
    {
        s[i++] = c; 
    }
    s[i] = '\0';
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
    return i;
}

int main()
{
    char words[STLEN];

    puts("Enter strings (empty line to quit):");
    while (readline_and_discard(words, STLEN, stdin) > 0)
    {
        puts(words);
    } 
    puts("done");
    return 0;
}
