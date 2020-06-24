#include<stdio.h>
#define TH(X,Y) (2.0/((1.0/(X))+(1.0/(Y))))
int main()
{
    int x,y;
    while(scanf("%d %d",&x,&y)==2)
    {
        double z=TH(x,y);
        printf("%f\n",z);
    }
    return 0;
}
