#include<stdio.h>
#include<string.h>
#include<math.h>
const int maxn=65;
int bstoi(char *pbin);
int main()
{
    char bstr[maxn];
    char *pbin=bstr;
    while(scanf("%s",bstr)!=EOF)
    {
        int res=bstoi(pbin);
        printf("%s=%d\n",bstr,res);
    }
    return 0;
}

int bstoi(char *pbin)
{
    int ans=0;
    int len;
    for(len=0;pbin[len]!='\0';len++);
    printf("len=%d\n",len);
    for(int i=len-1;i>=0;i--)
    {
        ans+=(pbin[i]-'0')*pow(2,len-1-i);
    }
    return ans;
}
