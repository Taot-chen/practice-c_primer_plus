#include<stdio.h>
#include<string.h>
char *sear(char *str,char ch);
int main()
{
    char ch[100];
    char c;
    char *res;
    gets(ch);
        //getchar();
        //puts(ch);
        c=getchar();
        res=sear(ch,c);
        if(res)
        {
            printf("%d\n",res-ch+1);
        }
        else
        {
            printf("NULL\n");
        }
    return 0;
}

char *sear(char *str,char ch)
{
    int n=strlen(str);
    int  i;
    for(i=0;i<n;i++)
    {
        if(str[i]==ch)
        {
            return str+i;
        }
    }
    return NULL;

}
