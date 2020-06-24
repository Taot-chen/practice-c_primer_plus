#include<stdio.h>
void to_binary(unsigned long long n,int m);

int main()
{
    unsigned long long num;
    int m;
    while(scanf("%llu %d",&num,&m)==2)
    {
        printf("%llu的%d进制表示为: ",num,m);
        to_binary(num,m);
        putchar('\n');
    }
    return 0;
}

void to_binary(unsigned long long n,int m)
{
    int r;
    r=n%m;
    if(n>=m)
    {
        to_binary(n/m,m);
    }
    printf("%d",r);
    return;
}
