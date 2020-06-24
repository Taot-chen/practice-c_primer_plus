#include<stdio.h>
void larger_of(double *a,double *b);
int main()
{
    double x,y;
    printf("Enter two numbers: ");
    while(scanf("%lf %lf",&x,&y)==2)
    {
         printf("x=%f, y=%f\n",x,y);
         larger_of(&x,&y);
         printf("x=%f, y=%f\n",x,y);
         printf("Enter two numbers: ");
    }
    printf("Bye.\n");
    return 0;
}
void larger_of(double *a,double *b)
{
    double max;
    max=*a>*b?*a:*b;
    *a=*b=max;
}
