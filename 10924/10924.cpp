#include<stdio.h>
#include<string.h>

int isp(int n)
{
    for(int i=2; i<=n/2; ++i)
        {
            if(n%i==0)
            {
                return 0;
                break;
            }
        }
    return 1;
}
int main()
{
    char a[25];
    while(scanf("%s",a)==1)
    {
        int sum=0;
        int n=strlen(a);
        for(int i=0;i<n;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
                sum=sum+(a[i]-38);
            else if(a[i]>='a' && a[i]<='z')
                sum=sum+(a[i]-96);
            else
                continue;
        }
        if(isp(sum)==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
        //printf("%d\n",sum);
    }
    return 0;
}
