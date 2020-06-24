#include<stdio.h>
#include<ctype.h>
int main()
{
    int space=0,hh=0,zf=0;
    char ch;
    while((ch=getchar())!='#')
    {
        if(!(ch-' '))
        {
            space++;
        }
        else if(ch=='\n')
        {
            hh++;
        }
        else
        {
            zf++;
        }
    }
    printf("There are %d spaces, %d hhs and %d other zfs\n",space,hh,zf);
    return 0;
}
