#include<stdio.h>
#include<ctype.h>
int main()
{
    int words=0,letter=0;
    int blank=0;
    char ch;
    double res;
    while((ch=getchar())!=EOF)
    {
        if(ch==' ')
        {
            blank++;
        }
        if(isalpha(ch))
        {
            letter++;
        }
    }
    res=1.0*letter/(blank+1);
    printf("%.2f\n",res);
    return 0;
}
