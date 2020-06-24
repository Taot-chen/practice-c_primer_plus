#include<stdio.h>
#include<time.h>

clock_t a,b;
int main()
{

    a=clock();
    int x=10;
    int y=100;
    for(int i=0;i<100000000;i++)
    {
        y+=x;
    }
    printf("%d\n",y);
    //Sleep(1000);
    b=clock();
    printf("%f %f\n",(double)a,(double)b);
    printf("%d\n",(int)CLOCKS_PER_SEC);
    printf("%f\n",(double)(b-a)/CLOCKS_PER_SEC);
    return 0;
}
