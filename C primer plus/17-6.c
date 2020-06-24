#include<stdio.h>
#include<stdbool.h>
#define LEN 100
int searchn(const int *pta,int num,int n);
int input(int *pta);
void sort(int *pta,int length);//从小到大排序

int main()
{
    int a[LEN];
    int n;
    int length=input(a);
    sort(a,length);
    printf("The result after sorting:\n");
    for(int i=0;i<length;i++)
   {
       printf("%d ",a[i]);
   }
   printf("\n");
    printf("Enter the number that you want to search:");
    scanf("%d",&n);
    int ans=searchn(a,length,n);
    printf("%d\n",ans);
    return 0;
}

int input(int *pta)
{
    int length;
    printf("How many integers do you want to save into the group?\n");
    scanf("%d",&length);
    printf("Enter the integers that you want to save:\n");
    for(int i=0;i<length;i++)
    {
        scanf("%d",&pta[i]);
    }
    return length;
}

void sort(int *pta,int length)//冒泡排序
{
    int temp;
   for(int i=0;i<length;i++)
   {
       for(int j=i;j<length;j++)
       {
           if(pta[i]>pta[j])
           {
               temp=pta[i];
               pta[i]=pta[j];
               pta[j]=temp;
           }
       }
   }
}

int searchn(const int *pta,int num,int n)
{
    int st=0,ed=num-1;
    int mid;
    while(st<=ed)
    {
        mid=(st+ed)/2;
        if(pta[mid]<n)
        {
            st=mid+1;
        }
        else if(pta[mid]>n)
        {
            ed=mid-1;
        }
        else
        {
            return 1;
            break;
        }
        //mid=(st+ed)/2;
    }
    return (pta[mid]==n)?1:0;
}
