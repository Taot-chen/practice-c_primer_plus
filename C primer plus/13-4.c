#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    char ch;
    if(argc<2)
    {
        fprintf(stderr,"Usage: %s filename.\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    for(int i=1;i<argc;i++)
    {
        if((fp=fopen(argv[i],"r"))==NULL)
        {
            fprintf(stderr,"I could't open the file \"%s\".\n",argv[1]);
            exit(EXIT_FAILURE);
        }
        while((ch=getc(fp))!=EOF)
        {
            putchar(ch);
        }
        printf("\n");
    }
    return 0;
}
