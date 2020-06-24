#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    long double sum1=0,sum2=0,sum3=0;
    long double cnt1=1,cnt2=1,cnt3=1;
    for(int i=1;i<=100;i++)
    {
        sum1+=1.0/i;
        cnt1+=1.0/(pow(2,i));
    }
    for(int i=1;i<=1000;i++)
    {
        sum2+=1.0/i;
        cnt2+=1.0/(pow(2,i));
    }
    for(int i=1;i<=10000;i++)
    {
        sum3+=1.0/i;
        cnt3+=1.0/(pow(2,i));
    }
    printf("%e %f %f\n%.100e %f %.50e\n",sum1,sum2,sum3,cnt1,cnt2,cnt3);
    //cout<<sum3<<endl<<cnt1<<endl;
    printf("%zd %zd\n",sizeof(double),sizeof(long double));
    return 0;
}
