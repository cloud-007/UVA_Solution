#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long

const int sz = 1002;
int vis[sz][sz], dis[sz][sz], row, col, line, n, u,tot, from_x, from_y, to_x, to_y;

bool valid(int tx, int ty)
{
    if(tx >= 0 && tx < row && ty >= 0 && ty < col && !vis[tx][ty])return true;
    return false;
}

int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};

int bfs(int sx, int sy)
{
    queue < pair < int, int >> q;
    q.push({sx, sy});
    vis[sx][sy] = 1;
    dis[sx][sy] = 0;
    while(!q.empty())
    {
        sx = q.front().first, sy = q.front().second, q.pop();
        if(sx == to_x && sy == to_y)return dis[sx][sy];
        for(int i = 0; i < 4; i++)
        {
            int tx = sx + fx[i], ty = sy + fy[i];
            if(valid(tx, ty))
            {
                vis[tx][ty] = 1;
                dis[tx][ty] = dis[sx][sy] + 1;
                q.push({tx, ty});
                if(tx == to_x && ty == to_y)return dis[tx][ty];
            }
        }
    }
    return dis[to_x][to_y];
}


int main()
{
#ifdef cloud007
    freopen("in.txt", "r", stdin);
#endif // cloud007
    cloud_007;
    while(cin >> row >> col)
    {
        memset(vis, 0, sizeof vis);
        memset(dis, 0, sizeof dis);
        if(row == 0 & col == 0)return 0;
        cin >> line;
        for(int i = 0; i < line; i++)
        {
            cin >> n >>tot;
            for(int i = 1; i <= tot; i++)
            {
                cin >> u;
                vis[n][u] = 1;
            }
        }
        cin >> from_x >> from_y >> to_x >> to_y;
        cout << bfs(from_x, from_y) << endl;
    }
}
