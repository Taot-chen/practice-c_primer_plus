#include<stdio.h>
//#include<iostream>>
//using namespace std;
int main()
{
    char ch;
    scanf("%s",&ch);
    int n=ch-'A';
    //cout<<n<<endl;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("%c",'A'+j);
        }
        for(int j=i-1;j>=0;j--)
        {
            printf("%c",'A'+j);
        }
        for(int j=0;j<n;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
