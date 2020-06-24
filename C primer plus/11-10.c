#include<stdio.h>
#include<string.h>
const int length=100;
void delspace(char *str);
char *s_gets(char *str,int n);
int main()
{
    char words[length];
    s_gets(words,length);
    printf("words: ");
    delspace(words);
    puts(words);
    return 0;
}

void delspace(char *str)
{
    int i;
    int k=0;
    int n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        int j;
        int m=strlen(str);
        for(j=0;j<m;j++)
        {
            if(str[j]==' ')
            {
                int p;
                for(p=j;p<m;p++)
                {
                    str[p]=str[p+1];
                }
            }
        }
    }
}

char *s_gets(char *str,int n)
{
    char *ch;
    int i=0;

    ch=fgets(str,n,stdin);
    if(ch)
    {
        while(str[i]!='\n'&&str[i]!='\0')
        {
            i++;
        }
        if(str[i]=='\n')
        {
            str[i]='\0';
        }
        else
        {
            while(getchar()!='\n')
            {
                continue;
            }
        }
    }
    return ch;
}
