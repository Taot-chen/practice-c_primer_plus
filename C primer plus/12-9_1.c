#include<stdio.h>
#include<stdlib.h>
#include<string.h>
const int m=100;


int main()
{
    int n;
    char **ptr;
    int i=0;
    printf("How many words do you wish to enter? ");
    //scanf("%d",&n);

    if(scanf("%d",&n)!=1)
    {
        puts("Please enter an integer.\n");
        exit(EXIT_FAILURE);
    }
    ptr=(char **) malloc(n*sizeof(char*));
    for(i=0;i<n;i++)
    {
        ptr[i]=(char *) malloc(m*sizeof(char));
    }
    if(ptr==NULL)
    {
        puts("Memory allocation failed.");
        exit(EXIT_FAILURE);
    }
    printf("Enter %d words now:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%s",ptr[i]);
    }
    printf("Here are your words:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",ptr[i]);
    }
    free(ptr);
    return 0;
}
