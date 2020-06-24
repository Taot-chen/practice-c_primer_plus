#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void itobs (int len,int a,int *res);
int main(int argc,char *argv[])
{
    if(argc!=3)
    {
        fprintf(stderr,"Need two strings.\n");
        exit(EXIT_FAILURE);
    }
    int a=0,b=0;
    int lena,lenb;
    lena=strlen(argv[1]);
    lenb=strlen(argv[2]);
   // printf("length=%d\n",lena);
    if(lena!=lenb)
    {
        fprintf(stderr,"The two strings are supposed to be the same in length.\n");
        exit(EXIT_FAILURE);
    }
    for(int i=0;i<lena;i++)
    {
        a=2*a+(argv[1][i]-'0');
        b=b*2+(argv[2][i]-'0');
        //printf("%d %d",argv[1]-'0');
        //printf("%d %d",argv[2]-'0');
        //printf("a=%d b=%d\n",a,b);
    }
    printf("a=%d b=%d\n",a,b);
    int ansa,ansb,ans1,ans2,ans3;
    ansa=~a;
    ansb=~b;
    ans1=a&b;
    ans2=a|b;
    ans3=a^b;
    int res1[lena],res2[lena],res3[lena],res4[lena],res5[lena];
    itobs(lena,ansa,res1);
    itobs(lena,ansb,res2);
    itobs(lena,ans1,res3);
    itobs(lena,ans2,res4);
    itobs(lena,ans3,res5);
    return 0;
}

void itobs(int len,int a,int *res)
{
    int ans[100]={0};
    int i=0;
    if(!a)
    {
        for(int j=0;j<len;j++)
        {
            res[j]=0;
        }
    }
    else
    {
        while(a)
        {
            ans[i++]=a%2;
            a/=2;
        }
        //printf("i=%d\n",i);
        for(int j=i-1;j>=0;j--)
        {
        res[j]=ans[i-1-j];
        }
    }
    for(int j=0;j<i;j++)
    {
        printf("%d",res[j]);
    }
    printf("\n");
}
