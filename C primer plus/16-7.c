#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<malloc.h>

void show_array(const double ar[],int n);
double *new_d_array(int n,...);

int  main()
{
    double *p1,*p2;

    p1=new_d_array(5,1.2,2.3,3.4,4.5,5.6);
    p2=new_d_array(4,100.0,20.00,8.08,-1980.0);

    show_array(p1,5);
    show_array(p2,4);
    free(p1);
    free(p2);

    return 0;
}

void show_array(const double ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%-10.2f",ar[i]);
        printf("%c",i==n-1?'\n':' ');
    }
}

double *new_d_array(int n,...)
{
    double *pt=(double *)malloc(n*sizeof(double));
    va_list apl;
    va_start(apl,n);
    for(int i=0;i<n;i++)
    {
        pt[i]=va_arg(apl,double);
    }
    va_end(apl);
    return pt;
}
