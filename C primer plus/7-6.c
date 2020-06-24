#include<stdio.h>
const int maxn=1000;
int main()
{
    int n=0;
    char ch;
    char chs[maxn];
    while((ch=getchar())!='#')
    {
        chs[n++]=ch;
    }
    int i;
    int res=0;
    for(i=0;i<n;i++)
    {
        if(chs[i]=='e'&&chs[i+1]=='i')
        {
            res++;
        }
    }
    printf("%d\n",res);
    return 0;
}
