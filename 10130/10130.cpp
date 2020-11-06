#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long
#define endl "\n"

const int sz = 1005;
int price[sz], weight[sz], ans = 0, tc, n, w, dp[sz][35], q;

int rec(int idx, int w)
{
    if(idx > n)return 0;
    int &ret = dp[idx][w];
    if(~ret)return ret;
    ret = 0;
    if(weight[idx] <= w)
    {
        ret = max(price[idx] + rec(idx+1, w - weight[idx]), rec(idx + 1, w));
    }
    else ret = rec(idx + 1, w);
    return ret;
}

int main()
{
#ifdef cloud007
    freopen("in.txt", "r", stdin);
#endif // cloud007
    cloud_007;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> price[i] >> weight[i];
        }
        cin >> q;
        ans = 0;
        while(q--)
        {
            cin >> w;
            memset(dp, -1, sizeof dp);
            ans += rec(1, w);
        }
        cout << ans << endl;
    }


    return 0;
}
