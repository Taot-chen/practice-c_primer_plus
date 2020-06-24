#include<stdio.h>
#include<string.h>
int daycount(int day,int month,int year);
struct months
{
    char name[20];
    char sname[4];
    int days;
    int monnum;
} month[12]=
{
        {"January","jan",31,1},
        {"February","feb",28,2},
        {"March","mar",31,3},
        {"April","apr",30,4},
        {"May","may",31,5},
        {"June","jun",30,6},
        {"July","jul",31,7},
        {"August","aug",31,8},
        {"September","sep",30,9},
        {"October","oct",31,10},
        {"November","nov",30,11},
        {"December","dec",31,12}
    };
int main()
{
    char mon[12][20]=
    {"January","February","March","mar","April","May","June","July","August",
    "September","October","November","December"};
    char smon[12][4]=
    {"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};
    int day,year;
    int monthnum=0;
    char monthn[20];
    int res=0;
    printf("Enter the number of day,the number,name or sname of month and the number of year:\n");
    scanf("%d %s %d",&day,monthn,&year);
    int len=strlen(monthn);
    if(len==1||len==2)
    {
        for(int i=0;i<len;i++)
        {
            monthnum=monthnum*10+(monthn[i]-'0');
            //printf("%d\n",monthn[i]-'0');
            //printf("monthnum=%d\n",monthnum);
        }
        //printf("monthnum=%d\n",monthnum);
    }
    else
    {
        if(!(strcmp(monthn,mon[0]))||!(strcmp(monthn,smon[0])))
        {
            monthnum=1;
        }
        else if(!(strcmp(monthn,mon[1]))||!(strcmp(monthn,smon[1])))
        {
            monthnum=2;
        }
        else if(!(strcmp(monthn,mon[2]))||!(strcmp(monthn,smon[2])))
        {
            monthnum=3;
        }
        else if(!(strcmp(monthn,mon[3]))||!(strcmp(monthn,smon[3])))
        {
            monthnum=4;
        }
        else if(!(strcmp(monthn,mon[4]))||!(strcmp(monthn,smon[4])))
        {
            monthnum=5;
        }
        else if(!(strcmp(monthn,mon[5]))||!(strcmp(monthn,smon[5])))
        {
            monthnum=6;
        }
        else if(!(strcmp(monthn,mon[6]))||!(strcmp(monthn,smon[6])))
        {
            monthnum=7;
        }
        else if(!(strcmp(monthn,mon[7]))||!(strcmp(monthn,smon[7])))
        {
            monthnum=8;
        }
        else if(!(strcmp(monthn,mon[8]))||!(strcmp(monthn,smon[8])))
        {
            monthnum=9;
        }
        else if(!(strcmp(monthn,mon[9]))||!(strcmp(monthn,smon[9])))
        {
            monthnum=10;
        }
        else if(!(strcmp(monthn,mon[10]))||!(strcmp(monthn,smon[10])))
        {
            monthnum=11;
        }
        else if(!(strcmp(monthn,mon[11]))||!(strcmp(monthn,smon[11])))
        {
            monthnum=12;
        }
    }
    res=daycount(day,monthnum,year);
    printf("There %s %d %s until the date you entered.\n",
           (res>1)?"are":"is",res,(res>1)?"days":"day");
    return 0;
}

int daycount(int day,int mmonth,int year)
{
    //extern struct month[12];
    int ans=0;
    int add;
    if(year%100==0)
    {
        if(year%400)
        {
            add=1;
        }
        else
        {
            add=0;
        }
    }
    else
    {
        if(year%4==0)
        {
            add=1;
        }
        else
        {
            add=0;
        }
    }
    for(int i=0;i<mmonth-1;i++)
    {
        if(i==1)
        {
            month[i].days+=add;
        }
        ans+=month[i].days;
        //printf("%d\n",ans);
    }
    ans+=day;
    return ans;
}
