#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long
#define endl "\n"

int n, u, v, casee = 1, answer;
map < int, vector < int >> x;
map < int, bool > vis;
map < int, int > dis, mp;
set < int > st;

void bfs(int u)
{
    queue < int > q;
    q.push(u);
    vis[u] = 1;
    while(!q.empty())
    {
        u = q.front(), q.pop();
        for(auto i : x[u])
        {
            if(!vis[i])
            {
                vis[i] = true;
                dis[i] = dis[u] + 1;
                mp[dis[i]]++;
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
    while(cin >> n && n)
    {
        x.clear(), st.clear();
        for(int i = 1; i <= n; i++)
        {
            cin >> u >> v;
            x[u].push_back(v);
            x[v].push_back(u);
            st.insert(u), st.insert(v);
        }
        int sz = st.size();
        while(cin >> u >> v)
        {
            if(u == 0 && v == 0)break;
            mp.clear(), dis.clear(), vis.clear();
            bfs(u);
            answer = 0;
            if(st.count(u))
                mp[0] = 1, answer = 1;
            for(int i = 1;; i++)
            {
                if(mp[i])
                {
                    mp[i] += mp[i - 1];
                    if(i <= v)
                        answer = mp[i];
                }
                else break;
            }
            answer = sz - answer;
            cout << "Case " << casee++ << ": " << answer << " nodes not reachable from node " << u << " with TTL = " << v << "." << endl;
        }
    }
}
