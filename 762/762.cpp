#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long
#define endl "\n"

int n;
string u, v, source, des;
map < string, vector < string >> x;
map < string, string > par;
map < string, bool> vis;
vector < pair < string, string >> ans;

void bfs(string u)
{
    queue < string >q;
    vis[u] = 1;
    q.push(u);
    while(!q.empty())
    {
        u = q.front(), q.pop();
        for(auto i : x[u])
        {
            if(!vis[i])
            {
                vis[i] = 1;
                q.push(i);
                par[i] = u;
                if(i == des)
                    return;
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
    int id = 0;
    while(cin >> n)
    {
        x.clear(), par.clear(), vis.clear(), ans.clear();
        for(int i = 1; i <= n; i++)
        {
            cin >> u >> v;
            x[u].push_back(v);
            x[v].push_back(u);
        }
        cin >> source >> des;
        if(id)cout<<endl;
        bfs(source);
        if(vis[des])
        {
            while(par[des] != des)
            {
                ans.push_back({par[des], des});
                des = par[des];
            }
            reverse(ans.begin(), ans.end());
            for(auto i : ans)
            {
                if(i.first.size() && i.second.size())
                    cout << i.first << " " << i.second << endl;
            }
        }
        else cout << "No route" << endl;
        id = 1;
    }
}
