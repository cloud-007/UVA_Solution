#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,casee=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int k,h,m,total=0;
        scanf("%d%d:%d",&k,&h,&m);
        int time=(h*60)+m;
        total=abs(1440-time);
        int mn=INT_MAX;
        for(int i=0;i<k;i++)
        {
            int hour,minute,ti;
            scanf("%d:%d%d",&hour,&minute,&ti);
            hour=(hour*60)+minute;
            if(hour<time)
            {
                hour+=total;
                hour+=ti;
            }
            else
                hour=abs(hour-time)+ti;
            mn=min(hour,mn);
        }
        printf("Case %d: %d\n",casee++,mn);
    }
}
