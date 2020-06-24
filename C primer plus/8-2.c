#include<stdio.h>
#include<ctype.h>
int main()
{
    int n=0;
    char ch;
    while((ch=getchar())!=EOF)
    {
        n++;
        if(!(isblank(ch)))
        {
            printf("%2c %4d",ch,ch);
            if(!(n%10))
            {
                printf("\n");
            }
            else
            {
                printf("   ");
            }
        }
        else
        {
            if(ch=='\n')
            {
                if(n%10)
                {
                    printf("\n%\n\n");
                }
                else
                {
                    printf("%\n\n");
                }
            }
            else if(ch=='\t')
            {
                if(n%10)
                {
                    printf("\n%\t\n");
                }
                else
                {
                    printf("%\t\n");
                }
            }
            else
            {
                if(n%10)
                {
                    printf("\n^A\n");
                }
                else
                {
                    printf("^A\n");
                }
            }
        }
    }
    return 0;
}
