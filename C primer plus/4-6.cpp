#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    char f[100], l[100];
    printf("Enter your first name and your last name:\n");
    scanf("%s",f);
    scanf("%s",l);
    a=strlen(f);
    b=strlen(l);
    printf("%*s %*s\n%-*d %-*d\n",a,f,b,l,a,a,b,b);
    printf("%*s %*s\n%*d %*d\n",a,f,b,l,a,a,b,b);
    return 0;
}
