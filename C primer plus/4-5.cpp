#include<stdio.h>
int main()
{
    float rate, dx, time;
    printf("Enter the rate and the dx:\n");
    scanf("%f %f",&rate,&dx);
    time=dx*8/rate;
    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n",
           rate,dx,time);
    return 0;
}
