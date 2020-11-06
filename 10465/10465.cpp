#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long

const int sz=1e4+10;
int m,n,t,ans,mx,ti;
int dp[sz];

void rec(int val, int tot)
{
    if(val==0)
    {
        ans=max(ans, tot);
        return;
    }
    if(~dp[val])return;
    dp[val]=1;
    if(val<ti)
    {
        ti=val;
        mx=tot;
    }
    if(val>=n) rec(val-n, tot+1);
    if(val>=m) rec(val-m, tot+1);
}

int main()
{
    //freopen("in.txt","r", stdin);
    cloud_007;
    while(cin>>n>>m>>t)
    {
        if(n>m)swap(n,m);
        memset(dp, -1, sizeof dp);
        ans=-1;
        mx=0,ti=INT_MAX;
        rec(t, 0);
        if(~ans)cout<<ans<<endl;
        else cout<<mx<<" "<<ti<<endl;
    }
}
