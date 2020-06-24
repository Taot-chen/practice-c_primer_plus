#include<stdio.h>
#include<string.h>
const int length=100;
void mystrncat(char *str1,char *str2,int n);
char *s_gets(char *str,int n);
int main()
{
    char ch1[length],ch2[length];
    s_gets(ch1,length);
    s_gets(ch2,length);
    int n;
    scanf("%d",&n);
    printf("ch1: %s\nch2: %s\n",ch1,ch2);
    mystrncat(ch1,ch2,n);
    puts(ch1);
    /*
    int  i;
    for(i=0;i<strlen(ch1);i++)
    {
        printf("%c",ch1[i]);
    }
    printf("\n%d\n",strlen(ch1));
    */
    return 0;
}

void mystrncat(char *str1,char *str2,int n)
{
    int i;
    int n1=strlen(str1);
    int n2=strlen(str2);
    //printf("%d %d\n",n1,n2);
    int maxl=length-n1-(n-1);
    //printf("%c\n",str1[n1]);
    //printf("%c\n%c\n%c\n",str2[n2],str2[n2-1],str2[n2-2]);
    for(i=0;i<n;i++)
    {
        if(i<=maxl&&i<n2)
        {
            str1[n1+i]=str2[i];
        }
        else
        {
            str1[n1+i]='\0';
            break;
        }
    }
    //return str1;
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
