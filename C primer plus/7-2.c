#include<stdio.h>
int main()
{
    int n=0;
    char ch;
    while((ch=getchar())!='#')
    {
        n++;
        if(n%8)
        {
            printf("%4d ",ch);
        }
        else
        {
            printf("%4d\n",ch);
        }
    }
    return 0;
}
