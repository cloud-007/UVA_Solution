#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,sum=0,count=0;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        double avg=sum/x;
        for(int i=0;i<x;i++)
        {
            if(a[i]>avg)
                count++;
        }
        double result=(count*100)/(double)x;
        printf("%.3lf%%\n",result);

    }
}
