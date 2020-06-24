#include<stdio.h>
const int length=100;
char *input(char str[]);
int main()
{
    char *ch;
    char words[length];
    ch=input(words);
    puts(ch);
    return 0;
}

char *input(char str[])
{
    int i;
    while((str[i++]=getchar())!='\n')
    {
        continue;
    }
    return str;
}
