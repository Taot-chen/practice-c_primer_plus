#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define LEN 50
void copy_file(FILE *in,FILE *out);
int main(int argc,char *argv[])
{
    FILE *in,*out;
    //char name[LEN]="copyfile.txt";
    //printf("%s\n",name);
    if(argc<2)
    {
        fprintf(stderr,"Usage: %s filename.\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((in=fopen(argv[1],"r"))==NULL)
    {
        fprintf(stderr,"I could't open the file \"%s\".\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    //printf("Enter the name of the output file.\n");
    //scanf("%s",name);
    out=fopen("copyfile.txt","w");
    if(out==NULL)
    {
        fprintf(stderr,"Can't creat the output file.\n");
        exit(EXIT_FAILURE);
    }
    copy_file(in,out);
    rewind(out);
    rewind(in);
    char ch;
    while((ch=getc(in))!=EOF)
    {
        putchar(ch);
    }
    printf("\n");
    while((ch=getc(out))!=EOF)
    {
        putchar(ch);
    }
    printf("\n");
    if(fclose(in)!=0||fclose(out)!=0)
    {
        fprintf(stderr,"Error in closing files.\n");
    }
    return 0;
}

void copy_file(FILE *in,FILE *out)
{
    char ch;
    while((ch=getc(in))!=EOF)
    {
        ch=toupper(ch);
        putc(ch,out);
    }
}
