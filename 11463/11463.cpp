#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long
#define endl "\n"

const int sz = 105;
int tc, casee = 1, n, m, u, v, vis[sz], dis[sz], disa[sz], st, en;
vector < int > x[sz], vv;

void bfs(int u, int ty)
{
    queue < int > q;
    q.push(u);
    vis[u] = 1;
    while(!q.empty())
    {
        u = q.front(), q.pop();
        int chn = 1;
        for(auto i : x[u])
        {
            if(!vis[i])
            {
                vis[i] = 1;
                if(ty)
                    dis[i] = dis[u] + 1;
                else disa[i] = disa[u] + 1;
                q.push(i);
            }
        }
    }
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
        vv.clear();
        for(int i = 0; i < sz; i++)
        {
            x[i].clear();
            vis[i] = dis[i] = disa[i] = 0;
        }
        cin >> n >> m;
        for(int i = 0; i < m; i++)
        {
            cin >> u >> v;
            x[u].push_back(v);
            x[v].push_back(u);
        }
        cin >> st >> en;
        bfs(st, 1);
        int ans = 0;
        memset(vis, 0, sizeof vis);
        bfs(en, 0);
        for(int i = 0; i < n; i++)
        {
            int val = dis[i] + disa[i];
            ans = max(ans, val);
        }
        cout << "Case " << casee++ << ": " << ans << endl;
    }
    return 0;
}
