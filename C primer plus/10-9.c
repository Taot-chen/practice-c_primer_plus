#include<stdio.h>
#define ROWS 3
#define COLS 5
void chushihua(int n,int m,double source[n][m]);
void copy_s(int n,int m,int s,int t,double source[n][m],double target[s][t]);
void show(int n,int m,int s,int t,double source[n][m],double target[s][t]);

int main()
{
    int rows=3,cols=5;
    double source[ROWS][COLS];
    double target[rows][cols];
    chushihua(rows,cols,source);
    copy_s(rows,cols,rows,cols,source,target);
    show(ROWS,COLS,rows,cols,source,target);
    return 0;
}

void chushihua(int n,int m,double source[n][m])
{
    int i,j;
    int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            source[i][j]=k*1.01;
            k++;
        }
    }
}

void copy_s(int n,int m,int s,int t,double source[n][m],double target[s][t])
{
    int i,j;
    int k,l;
    for(i=0,k=0;i<n,k<s;i++,k++)
    {
        for(j=0,l=0;j<m,l<t;j++,l++)
        {
            target[k][l]=source[i][j];
        }
    }
}

void show(int n,int m,int s,int t,double source[n][m],double target[s][t])
{
    int i,j,k,l;
    printf("source:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%-10.3f ",source[i][j]);
        }
        printf("\n");
    }
    printf("target:\n");
    for(k=0;k<s;k++)
    {
        for(l=0;l<t;l++)
        {
            printf("%-10.3f ",target[k][l]);
        }
        printf("\n");
    }
}
