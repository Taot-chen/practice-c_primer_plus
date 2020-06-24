#include<stdio.h>
#include<float.h>
int main()
{
    double a=1.0/3.0;
    float b=1.0/3.0;
    printf("%d %d\n",FLT_DIG, DBL_DIG);
    printf("a=%.6f b=%.6f\n",a,b);
    printf("a=%.12f b=%.12f\n",a,b);
    printf("a=%.16f b=%.16f\n",a,b);
    return 0;
}
