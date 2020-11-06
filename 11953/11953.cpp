#include<bits/stdc++.h>
using namespace std;

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
const int sz=120;
int vis[sz][sz],row;
char a[sz][sz];

bool valid(int tx,int ty)
{
    if(tx>=1 && ty>=1 && tx<=row && ty<=row && a[tx][ty]!='.' && !vis[tx][ty])
        return true;
    return false;
}

void dfs(int sx,int sy)
{
    vis[sx][sy]=1;
    for(int i=0;i<4;i++)
    {
        int tx=sx+fx[i];
        int ty=sy+fy[i];
        if(valid(tx,ty))
            dfs(tx,ty);
    }
}

int main()
{
    int tc,casee=1;
    scanf("%d",&tc);
    while(tc--)
    {
        char c;
        memset(vis,0,sizeof vis);
        scanf("%d",&row);
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=row;j++)
            {
                while(true)
                {
                    scanf("%c",&c);
                    if(c=='.' || c=='@' ||c=='x')
                        break;
                }
                a[i][j]=c;
            }
        }
        int cnt=0;
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=row;j++)
            {
                if(a[i][j]=='x' && !vis[i][j])
                {
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        printf("Case %d: %d\n",casee++,cnt);
    }
}
