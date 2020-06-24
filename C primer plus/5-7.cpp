#include<stdio.h>
double lifang(double a);
int main()
{
    printf("请输入一个浮点数：");
    double n;
    scanf("%lf",&n);
    double res=lifang(n);
    printf("%f\n",res);
    return 0;
}
double lifang(double a)
{
    double ans=a*a*a;
    return ans;
}
