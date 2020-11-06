#include<bits/stdc++.h>
using namespace std;
#define cloud_007 ios_base::sync_with_stdio(false),cin.tie(0)
#define ll long long
#define endl "\n"

const int sz = 102;
int row, col, vis[sz][sz], ans;
char a[sz][sz];

int fx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int fy[] = {0, 0, 1, -1, 1, -1, 1, -1};

void dfs(int sx, int sy)
{
    vis[sx][sy] = 1;
    for(int i = 0; i < 8; i++)
    {
        int tx = sx + fx[i], ty = sy + fy[i];
        if(tx >= 0 && tx < row && ty >= 0 && ty < col && !vis[tx][ty] && a[tx][ty] == '@')
        {
            dfs(tx, ty);
        }
    }
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
        if(row == 0)return 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                cin >> a[i][j];
            }
        }
        ans = 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(a[i][j] == '@' && !vis[i][j])
                {
                    ans ++;
                    dfs(i, j);
                }
            }
        }
        cout << ans << endl;
    }


    return 0;
}
