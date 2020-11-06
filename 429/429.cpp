#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long
#define endl "\n"

vector < string > x[12];
int tc;
string u, v, word;
map < string, bool > vis;
map < string, int > dis;

int bfs(string u, string v)
{
    int sz;
    queue < string > q;
    q.push(u);
    vis[u] = true;
    dis[u] = 0;
    while(!q.empty())
    {
        u = q.front(), q.pop(), sz = u.size();
        if(u == v)return dis[u];
        for(auto i : x[sz])
        {
            if(!vis[i])
            {
                int chn = 0;
                for(int j = 0; j < sz; j++)
                {
                    if(u[j] != i[j])chn++;
                }
                if(chn == 1)
                {
                    vis[i] = true;
                    dis[i] = dis[u] + 1;
                    q.push(i);
                }
            }
        }
    }
    return dis[v];
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
        while(getline(cin, u) && u != "*")
        {
            x[u.size()].push_back(u);
        }
        while(getline(cin, u) && u.size())
        {
            istringstream iss(u);
            int one = 0;
            while(iss >> word)
            {
                if(one == 0)
                    v = word, one = 1;
                else u = word;
            }
            dis.clear();
            vis.clear();
            cout << v << " " << u << " " << bfs(v, u) << endl;
        }
        if(tc)
        cout << endl;
    }
}
