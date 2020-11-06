#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long
#define endl "\n"

int fx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int fy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int vis[10][10], dis[10][10];
map < char, int > mp;
string u, v;

bool valid(int tx, int ty)
{
    if(tx >= 1 && tx <= 8 && ty >= 1 && ty <= 8 && !vis[tx][ty])return true;
    return false;
}

int bfs(int sx, int sy, int tox, int toy)
{
    queue < pair < int, int >> q;
    q.push({sx, sy});
    vis[sx][sy]=1;
    while(!q.empty())
    {
        sx = q.front().first, sy = q.front().second, q.pop();
        //cout<<sx<<" "<<sy<<endl;
        if(sx == tox && sy == toy)break;
        for(int i = 0; i < 8; i++)
        {
            int tx = sx + fx[i], ty = sy + fy[i];
            if(valid(tx, ty))
            {
                vis[tx][ty]=1;
                dis[tx][ty] = dis[sx][sy] + 1;
                q.push({tx, ty});
            }
        }
    }
    return dis[tox][toy];
}

int main()
{
#ifdef cloud007
    freopen("in.txt", "r", stdin);
#endif // cloud007
    cloud_007;
    mp['a'] = 1, mp['b'] = 2, mp['c'] = 3, mp['d'] = 4, mp['e'] = 5, mp['f'] = 6, mp['g'] = 7, mp['h'] = 8;
    while(cin >> u >> v)
    {
        memset(vis, 0, sizeof vis);
        memset(dis, 0, sizeof dis);
        char a = u[0], b = v[0];
        //cout<<mp[a]<<" "<<u[1]-'0'<<" "<<mp[b]<<" "<<v[1]-'0'<<endl;
        cout << "To get from " << u << " to " << v << " takes " << bfs(mp[a], u[1]-'0', mp[b], v[1]-'0') << " knight moves." << endl;
    }
}
