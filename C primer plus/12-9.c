#include<stdio.h>
#include<stdlib.h>
#include<string.h>
const int m=100;

/*
int main()
{
    int n;

    char words[n][m];
    //char (*ptr)[n]=words[n][m];
    int i=0;
    printf("How many words do you wish to enter? ");
    scanf("%d",&n);
    /*
    if(scanf("%d",&n)!=1)
    {
        puts("Please enter an integer.\n");
        exit(EXIT_FAILURE);
    }
    //ptr=(char (*)[n]) malloc(n*m*sizeof(char));
    /*for(int j=0;j<n;j++)
    {
        ptr[i]=words[i];
    }
    if(ptr==NULL)
    {
        puts("Memory allocation failed.");
        exit(EXIT_FAILURE);
    }
    printf("Enter %d words now:\n",n);
    while(i<n&&(scanf("%s",words[i]))==1)
    {
        //printf("%d: %s\n",i,ptr[i]);
       // printf("%p\n",ptr[i]);
        ++i;
    }
    printf("Here are your words:\n");
    for(i=0;i<n;i++)
    {
        //printf("%d ",i);
        //printf("%p\n",ptr[i]);
        printf("%s\n",words[i]);
    }
    //free(ptr);
    return 0;
}*/
int main()
{
    int n;
    int i;

    printf("How many words do you wish to enter? ");
    scanf("%d",&n);
    char words[n][m];
    printf("Enter %d words now:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%s",words[i]);
    }
    printf("Here are your words:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",words[i]);
    }
    return 0;
}
