#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    int big=0,small=0;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            if(islower(ch))
            {
                small++;
            }
            else
            {
                big++;
            }
        }
        else
        {
            continue;
        }
    }
    printf("big=%d, small=%d\n",big,small);
    return 0;
}
