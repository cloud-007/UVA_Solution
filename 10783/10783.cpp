#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int k=0;k<n;k++){
        scanf("%d%d",&a[k],&b[k]);
        for(int i=a[k];i<=b[k];i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        printf("Case %d: %d\n",k+1,sum);
        sum=0;
    }
    return 0;
}
