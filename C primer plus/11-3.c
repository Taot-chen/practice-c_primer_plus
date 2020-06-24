#include<stdio.h>
#include<ctype.h>
char *input(char *str,int n);
int main()
{
    char words[100];
    puts(input(words,100));
    return 0;
}

char *input(char *str,int n)
{
    char *temp;
    int i=0;
    int k;
    temp=fgets(str,n,stdin);
    if(temp)
    {
        while(temp[i]!='\0')
        {
            if(isblank(temp[i]))
            {
                continue;
                i++;
            }
            k=i;
            while(!isblank(str[i]))
            {
                i++;
            }
            if(isblank(str[i]))
            {
                str[i]='\0';
            }
            else
            {
                while(!isblank(getchar()))
                {
                    continue;
                }
            }
        }

    }
    return temp+k;
}
