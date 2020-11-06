#include<bits/stdc++.h>
using namespace std;

const int sz=120,mod=1000007;
int vis[sz][sz],cnt,row,col;
int what[sz][sz];
char a[sz][sz];

int fx[]= {-1,-1};
int fy[]= {1,-1};
vector < pair < int,int >> vp;

bool valid(int tx,int ty)
{
    if(tx>=1 && tx<=row && ty>=1 && ty<=row && a[tx][ty]=='.')
    {
        return true;
    }
    return false;
}

void dfs(int sx,int sy)
{
    vis[sx][sy]=1;
    for(int i=0; i<2; i++)
    {
        int tx=sx+fx[i];
        int ty=sy+fy[i];
        if(valid(tx,ty))
        {
            if(!vis[tx][ty])
            {
                if(tx!=1)
                {
                    dfs(tx,ty);
                    what[sx][sy]+=what[tx][ty];
                    what[sx][sy]%=mod;
                }
                else
                {
                    what[sx][sy]++;
                    what[sx][sy]%=mod;
                }
            }
            else
            {
                what[sx][sy]+=what[tx][ty];
                what[sx][sy]%=mod;
            }
        }
        else if(valid(tx+fx[i],ty+fy[i]))
        {
            tx+=fx[i],ty+=fy[i];
            if(!vis[tx][ty])
            {
                if(tx!=1)
                {
                    dfs(tx,ty);
                    what[sx][sy]+=what[tx][ty];
                    what[sx][sy]%=mod;
                }
                else
                {
                    what[sx][sy]++;
                    what[sx][sy]%=mod;
                }
            }
            else
            {
                what[sx][sy]+=what[tx][ty];
                what[sx][sy]%=mod;
            }
        }
    }
}

int main()
{
    int tc,casee=1;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&row);
        int x,y;
        char c;
        for(int i=1; i<=row; i++)
        {
            for(int j=1; j<=row; j++)
            {
                while(true)
                {
                    scanf("%c",&c);
                    if(c=='.' || c=='B' || c=='W')
                        break;
                }
                a[i][j]=c;
                if(c=='W')
                {
                    x=i,y=j;
                }
            }
        }
        memset(vis,0,sizeof vis);
        memset(what,0,sizeof what);
        dfs(x,y);
        printf("Case %d: %d\n",casee++,what[x][y]);
    }
}
/*
Case
4
....
....
.B.B
..W.
*/
