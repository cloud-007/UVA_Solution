#include<stdio.h>
int main()
{
    int n;
    double c,far;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf%lf",&c,&far);
        far = (9*c/5+far)*5/9;
        printf("Case %d: %.2lf\n",i+1,far);
    }
    return 0;
}
