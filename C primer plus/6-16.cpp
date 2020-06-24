#include<stdio.h>
const int a=100;
int main()
{
    double inc1=0,inc2=a;
    int i=0;
    do
    {
        inc1+=a*0.1;
        inc2+=inc2*0.05;
        i++;
    }
    while(inc2<=inc1+a);
    printf("i=%d\n",i);
    printf("%f %f\n",inc1+a,inc2);
    return 0;
}
