#include<stdio.h>
#include<ctype.h>
int find_location(char ch);
int main()
{
    char ch;
    int res;
    while((ch=getchar())!=EOF)
    {
        if(!(isalpha(ch)))
        {
            res=-1;
            printf("%d\n",res);
        }
        else
        {
            res=find_location(ch);
            printf("%d\n",res);
        }
        getchar();
    }
    return 0;
}
int find_location(char ch)
{
    ch=tolower(ch);
    int ans;
    ans=ch-'a';
    return ans+1;
}
