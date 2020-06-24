#include<stdio.h>
const int maxn=1000;
int main()
{
    int num=0;
    char ch;
    char chs[maxn];
    int n=0;
    while((ch=getchar())!='#')
    {
        switch(ch)
        {
        case '.':
            ch='!';
            chs[n++]=ch;
            break;
        case '!':
            chs[n++]=ch;
            chs[n++]=ch;
            break;
        default:
            chs[n++]=ch;
            break;
        }
        //chs[n++]=ch;
    }
    int i;
    for(i=0;i<n;i++)
    {
        printf("%c",chs[i]);
        if(i==n-1)
        {
            printf("\n");
        }
    }
    return 0;
}
