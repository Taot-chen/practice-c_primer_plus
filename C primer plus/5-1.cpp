#include<stdio.h>
#define EX 60;
int main()
{
    int minute;
    int h,m;
    printf("Please enter a number:");
    while(scanf("%d",&minute)&&minute>0)
    {
        h=minute/EX;
        m=minute%EX;
        printf("%d minutes are %d hours and %d minutes.\n",minute,h,m);
        printf("Please enter a number:");
    }
    return 0;
}
