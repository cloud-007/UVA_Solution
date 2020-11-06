#include<iostream>
#include<map>
using namespace std;

const int sz=30050;
int par[sz];

int find(int u)
{
    return u==par[u]?u:par[u]=find(par[u]);
}

void unions(int u,int v)
{
    u=find(u);
    v=find(v);
    if(u!=v)
        par[v]=u;
}

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=1; i<=n; i++)
            par[i]=i;
        while(m--)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            unions(u,v);
        }
        map < int, int > mp;
        int mx=0;
        for(int i=1; i<=n; i++)
        {
            int x=find(par[i]);
            mp[x]++;
            mx=max(mx,mp[x]);
        }
        printf("%d\n",mx);
    }
}
