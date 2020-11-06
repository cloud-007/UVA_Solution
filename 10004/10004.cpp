#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long
#define endl "\n"

int n, m, u, v, vis[201], ans;
vector < int > x[201];

bool dfs(int u)
{
    bool ans = true;
    for(auto i : x[u])
    {
        if(!vis[i])
        {
            if(vis[u] == 1)vis[i] = 2;
            else vis[i] = 1;
            ans &=dfs(i);
        }
        else if(vis[i] == vis[u])
            return false;
    }
    return ans;
}

int main()
{
#ifdef cloud007
    freopen("in.txt", "r", stdin);
#endif // cloud007
    cloud_007;
    while(cin >> n && n)
    {
        cin >> m;
        for(int i = 0; i < 201; i++)x[i].clear(), vis[i] = 0;
        for(int i = 1; i <= m; i++)
        {
            cin >> u >> v;
            x[u].push_back(v);
            x[v].push_back(u);
        }
        vis[0] = 1;
        if(dfs(0))cout << "BICOLORABLE." << endl;
        else cout << "NOT BICOLORABLE." << endl;
    }
}
