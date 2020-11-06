#include<bits/stdc++.h>
using namespace std;
/*int digit(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    //cout<<count<<endl;
    return count;
}*/
int divisorsum(int n)
{
    int x=n;
    int sum=0;
    for(int i=1; i<=x/2; i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
    //cout<<sum<<endl;
    return sum;
}

int main()
{
    int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        else
        {
            int x=divisorsum(n);
            if(x==n)
                printf("%5d  PERFECT\n",n);
            else if(x<n)
                printf("%5d  DEFICIENT\n",n);
            else
                printf("%5d  ABUNDANT\n",n);
        }
    }
}
