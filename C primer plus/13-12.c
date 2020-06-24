#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fpd,*fpi;
    int data[20][30];
    char imagine[20][31];
    char ch;
    if((fpd=fopen("imagine_data.txt","r"))==NULL)
    {
        fprintf(stderr,"Error in opening the data file.\n");
        exit(EXIT_FAILURE);
    }
    int i=0,j=0;
    while((ch=getc(fpd))!=EOF)
    {
        if(ch==' ')
        {
            continue;
        }
        else if(ch=='\n')
        {
            i++;
            j=0;
        }
        else
        {
            data[i][j++]=ch-'0';
        }
        //printf("%d %d\n",i,j);
    }
    for(int p=0;p<20;p++)
    {
        for(int q=0;q<30;q++)
        {
            printf("%d ",data[p][q]);
        }
        printf("\n");
    }
    rewind(fpd);
    while((ch=getc(fpd))!=EOF)
    {
        putchar(ch);
    }
    printf("\n");
    for(int p=0;p<20;p++)
    {
        for(int q=0;q<30;q++)
        {
            switch(data[p][q])
            {
            case 0:
                imagine[p][q]=32;
                break;
            case 1:
                imagine[p][q]=46;
                break;
            case 2:
                imagine[p][q]=39;

            case 3:
                imagine[p][q]=58;
                break;
            case 4:
                imagine[p][q]=126;
                break;
            case 5:
                imagine[p][q]=42;

            case 6:
                imagine[p][q]=61;
                break;
            case 7:
                imagine[p][q]=45;
                break;
            case 8:
                imagine[p][q]=37;

            case 9:
                imagine[p][q]=35;
                break;
            }
        }
    }
    for(int k=0;k<20;k++)
    {
        imagine[k][30]='\0';
    }
    for(int k=0;k<20;k++)
    {
        printf("%s\n",imagine[k]);
    }
    for(int p=0;p<20;p++)
    {
        for(int q=0;q<30;q++)
        {
            putchar(imagine[p][q]);
        }
        printf("\n");
    }
    if((fpi=fopen("imagine.txt","w"))==NULL)
    {
        fprintf(stderr,"Error in opening the imagine file.\n");
        exit(EXIT_FAILURE);
    }
    for(int p=0;p<20;p++)
    {
        for(int q=0;q<31;q++)
        {
            putc(imagine[p][q],fpi);
        }
    }
    if(fclose(fpd)!=0||fclose(fpi)!=0)
    {
        fprintf(stderr,"Error in closing files.\n");
    }
    return 0;
}
