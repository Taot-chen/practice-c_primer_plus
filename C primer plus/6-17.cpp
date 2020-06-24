#include<stdio.h>
const int a=100;
int main()
{
    double res=100;
    int i=0;
    while(res>0)
    {
        res+=res*0.08;
        res-=10;
        i++;
    }
    printf("i=%d\n",i);
    return 0;
}
