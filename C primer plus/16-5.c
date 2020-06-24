#include<stdio.h>
#define LEN 100
#include<stdlib.h>

void get_rand(int *a,int m,int n,int num);
void output_res(int *b,int len,int number,int *a);
int main()
{
    int a[LEN];
    int num;
    int rand_num[LEN];
    printf("Enter the number of numbers you want(q to quit):");
    for(int i=0;i<LEN;i++)
    {
        a[i]=(i+1)*(i+1)/(i+i+100);
    }
    while(scanf("%d",&num)==1)
    {
        get_rand(rand_num,0,LEN-1,num);
        /*
        for(int i=0;i<num;i++)
        {
            printf("%d ",rand_num[i]);
        }
        printf("\n");*/
        output_res(a,LEN,num,rand_num);
    }
    return 0;
}

void get_rand(int *a,int m,int n,int num)
{
    for(int i=0;i<num; )
    {
        int ans=rand()%(n-m+1)+m;
        int j;
        for(j=0;j<i;j++)
        {
            if(a[j]==ans)
            {
                break;
            }
        }
        if(j==i)
        {
            a[i++]=ans;
        }
    }
}

void output_res(int *b,int len,int number,int *a)
{
    for(int i=0;i<number;i++)
    {
        printf("%d",b[a[i]]);
        printf("%c",i==number-1?'\n':' ');
    }
}
