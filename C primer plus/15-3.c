#include<stdio.h>
int test(int n);
void itobs(int n,int *ans);
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int res=test(n);
        printf("%d\n",res);
    }

    return 0;
}

int test(int n)
{
    int tes=0;
    int res=n^0;
    int ans[100]={0};
    itobs(res,ans);
    for(int i=0;i<100;i++)
    {
        if(ans[i])
        {
            tes++;
        }
    }
    return tes;
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
