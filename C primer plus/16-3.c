#include<stdio.h>
#include<math.h>
#define ANG_TO_RAD(X) ((X)/180*(4*atan(1)))
typedef struct x_y
{
    double x;
    double y;
} XY;
struct p_o
{
    double p;
    double o;
};
XY change(struct p_o *);

int main()
{
    struct p_o input;
    XY output;
    struct p_o *pt;
    pt=&input;
    //printf("%f\n",ANG_TO_RAD(180));
    printf("Enter the value of p and o:\n");
    while(scanf("%lf %lf",&input.p,&input.o)==2)
    {
        output=change(pt);
        printf("x=%f y=%f\n",output.x,output.y);
        printf("Enter the value of p and o:\n");
    }
    return 0;
}

XY change(struct p_o *pt)
{
    XY output;
    output.x=pt->p*cos(ANG_TO_RAD(pt->o));
    output.y=pt->p*sin(ANG_TO_RAD(pt->o));
    return output;
}
