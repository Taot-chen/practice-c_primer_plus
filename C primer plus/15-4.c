#include<stdio.h>
int judge(int n,int l);
void itobs(int,int *);
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int l;
        scanf("%d",&l);
        int res=judge(n,l);
        printf("%d\n",res);
    }
    return 0;
}

int judge(int n,int l)
{
    int ans[100];
    itobs(n,ans);
    return ans[l-1];
}

void itobs(int n,int *ans)
{
    int len=100;
    if(!n)
    {
        for(int i=0;i<100;i++)
        {
            ans[i]=0;
        }
    }
    else
    {
        int res[100];
        int k=0;
        while(n)
        {
            res[k++]=n%2;
            n/=2;
        }
        for(int i=k-1;i>=0;i--)
        {
            ans[i]=res[k-1-i];
        }
    }
}
