#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long

const int sz=3e4+10;
int n,x,t,m;
ll dp[sz][6],ans;

int fx[]={1,5,10,25,50};
ll rec(int m, int n)
{
    if(n==0)return 1;
    if(n<=0)return 0;
    if(m<=0&&n>=1)return 0;
    if(~dp[n][m])return dp[n][m];
    return dp[n][m]=rec(m-1,n)+rec(m, n-fx[m-1]);
}

int main()
{
    //freopen("in.txt","r",stdin);
    cloud_007;
    while(cin>>n)
    {
        memset(dp, -1, sizeof dp);
        ans=rec(5,n);
        cout<<"There "<<(ans==1?"is only":"are")<<" "<<ans<<" way"<<(ans==1?" ":"s ")<< "to produce "<<n<<" cents change."<<endl;
    }
}
