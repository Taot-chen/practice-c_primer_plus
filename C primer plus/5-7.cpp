#include<stdio.h>
double lifang(double a);
int main()
{
    printf("������һ����������");
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
