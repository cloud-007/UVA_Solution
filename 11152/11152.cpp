#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,t,cr,ca,icr,ica,ta,pi=acos(-1.0);
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
        s=(a+b+c)/2;
        t=sqrt(s*(s-a)*(s-b)*(s-c));
        cr=(a*b*c)/(4*t);
        ca=pi*cr*cr;
        icr=t/s;
        double red=pi*icr*icr;
        double violet=t-red;
        double yellow=ca-t;
        printf("%.4lf %.4lf %.4lf\n",yellow,violet,red);
    }
    return 0;
}
