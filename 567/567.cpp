#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long

const int sz = 22;
vector < int > x[22];
int vis[sz], dis[sz], n, u, v, casee = 1;

int bfs(int u, int v)
{
    queue < int > q;
    q.push(u);
    vis[u] = 1;
    while(!q.empty())
    {
        u = q.front(), q.pop();
        if(u == v)break;
        for(auto i : x[u])
        {
            if(!vis[i])
            {
                vis[i] = 1;
                dis[i] = dis[u] + 1;
                q.push(i);
                if(i == v)break;
            }
        }
    }
    return dis[v];
}

int main()
{
#ifdef cloud007
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif // cloud007
    cloud_007;
    while(!cin.eof())
    {
        for(int i = 0; i < 22; i++)x[i].clear();
        for(int i = 1; i <= 19; i++)
        {
            string s;
            if(i==1)
            {
                cin>>s;
                if(s.empty())return 0;
                stringstream num(s);
                num>>n;
            }
            else
            cin >> n;
            for(int j = 1; j <= n; j++)
            {
                cin >> u;
                x[u].push_back(i);
                x[i].push_back(u);
            }
        }
        cin >> n;
        cout << "Test Set #" << casee++ << endl;
        for(int i = 1; i <= n; i++)
        {
            cin >> u >> v;
            memset(vis, 0, sizeof vis);
            memset(dis, 0, sizeof dis);
            if(u < 10)cout << " ";
            cout << u << " to ";
            if(v < 10)cout << " ";
            cout << v << ": " << bfs(u, v) << endl;
        }
        cout << endl;
    }
}
