#include<stdio.h>
#include<ctype.h>
const int length=100;
char *input(char *str,int n);
int main()
{
    int n;
    scanf("%d",&n);
    char *ch;
    char words[length];
    puts(input(words,n));
    return 0;
}

char *input(char *str,int n)
{
    int i=0;
    //int k=0;
    char ch;
    while(!isblank(ch=getchar())&&i<=n)
    {

       str[i++]=ch;
    }
    str[i++]='\0';
    return str;
}
