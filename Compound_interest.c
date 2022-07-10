#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,p,t,r;
    scanf("%lf%lf%lf",&p,&r,&t);
    b=pow((1+(r/100)),t);
    a=p*b;
    printf("%.2lf",a);
}
 