#include<stdio.h>
const int a=5;
int main()
{
    int num=a;
    int i=0;
    while((num-i)*2<=150)
    {
        i++;
        num-=i;
        num*=2;
        printf("%6d%6d\n",i,num);

    }
    return 0;
}
