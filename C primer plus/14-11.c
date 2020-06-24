#include<stdio.h>
#include<math.h>
double scos(double n);
double csin(double n);
int main()
{
    double source[100],target[100]={0};
    double(*ffp[4])(double)={sin,cos,scos,csin};
    int choice;
    for(int i=0;i<100;i++)
    {
        source[i]=1.0/(i+1);
    }
    printf("Enter a integer(1 to 4)(any other input to quit):\n");
    while((scanf("%d",&choice))==1)
    {
        if(choice>=1&&choice<=4)
        {
            switch(choice)
            {
            case 1:
                for(int i=0;i<100;i++)
                {
                    target[i]=(*ffp[0])(source[i]);
                }
                break;
            case 2:
                for(int i=0;i<100;i++)
                {
                    target[i]=(*ffp[1])(source[i]);
                }
                break;
            case 3:
                for(int i=0;i<100;i++)
                {
                    target[i]=(*ffp[2])(source[i]);
                }
                break;
            case 4:
                for(int i=0;i<100;i++)
                {
                    target[i]=(*ffp[3])(source[i]);
                }
                break;
            }
            printf(" source   target\n");
            for(int i=0;i<10;i++)
            {
                printf("%6.6f %6.6f\n",source[i],target[i]);
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}

double csin(double n)
{
    double m;
    m=sin(n);
    double res=cos(m);
    return res;
}

double scos(double n)
{
    return sin(cos(n));
}
