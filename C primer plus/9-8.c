#include<stdio.h>
double power(double a,int b);
int main()
{
    int b;
    double a;
    while(scanf("%lf %d",&a,&b)!=EOF)
    {
        if(a==0&&!b)
        {
            printf("There is not a defination of 0^0.\n");
        }
        else if(a!=0&&!b)
        {
            printf("%f^0=1\n",a);
        }
        else
        {
            //printf("%d\n",b);
            printf("%f^%d=%f\n",a,b,power(a,b));
        }
    }
    return 0;
}
double power(double a,int b)
{
    int i;
    double ans=1.0;
    if(b>0)
    {
        for(i=0;i<b;i++)
        {
            ans*=a;
        }
    }
    else
    {
        for(i=0;i<-b;i++)
        {
            ans*=a;
        }
        ans=1.0/ans;
    }
    return ans;
}
