#include<bits/stdc++.h>
using namespace std;

const int sz=1e6+50;
int dp[sz],ans[sz];

void init()
{
    for(int i=1;i<sz;i++)
    {
        for(int j=i;j<=sz;j+=i)
            dp[j]++;
    }
    dp[0]=0;
    ans[1]=1;
    for(int i=2;i<sz;i++)
    {
        if(dp[i]>=dp[i-1])
        {
            ans[i]=i;
        }
        else
        {
             ans[i]=ans[i-1];
             dp[i]=dp[i-1];
        }
    }
}

int main()
{
    memset(dp,0,sizeof dp);
    memset(ans,0,sizeof ans);
    init();
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",ans[n]);
    }
}
