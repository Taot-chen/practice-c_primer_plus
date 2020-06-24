#include<stdio.h>
void copy_arr(double target1[],const double source[],int n);
void copy_ptr(double *start_t,const double *start_s,int n);
void copy_ptrs(double target3[],const double source[],double *end);
int main()
{
    double source[5]={1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source+5);
    return 0;
}

void copy_arr(double target1[],const double source[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        target1[i]=source[i];
        printf("%f",target1[i]);
        if(i<n-1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }
}

void copy_ptr(double *start_t,const double *start_s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        *(start_t+i)=*(start_s+i);
        printf("%f",*(start_t+i));
        if(i<n-1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }
}

void copy_ptrs(double target3[],const double source[],double *end)
{
    int i=0,n;
    n=end-source;
    //printf("%d\n",n);
    while(source<end)
    {
        *target3=*source;
        printf("%f",*target3);
        if(i<n-1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
        target3++;
        source++;
        i++;
    }
}
