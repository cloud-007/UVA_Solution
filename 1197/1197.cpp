/*One touch and i IGNITE*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define cloud_007 ios_base::sync_with_stdio(false);cin.tie(NULL)
#define F first
#define S second
#define endl "\n"
#define Endl "\n"

const int sz = 30000 + 5;
int n, m, k, a[sz], vis[sz], ans = 0, par[sz];
set < int > st;



int find_set(int v) {
    if(v == par[v])
        return v;
    return par[v] = find_set(par[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if(a != b)
        par[b] = a;
}

vector < int > x[sz];

void dfs(int u) {
    vis[u] = 1, ans++;
    for(auto i : x[u]) {
        if(!vis[i]) {
            dfs(i);
        }
    }
}

int main() {
#ifdef cloud007
    freopen("in.txt", "r", stdin);
#endif // cloud007
    cloud_007;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) {
            return 0;
        }
        st.clear();
        for(int i = 0; i <= n; i++)x[i].clear(), vis[i] = 0, par[i] = i;
        while(m--) {
            cin >> n;
            for(int i = 1; i <= n; i++) {
                cin >> a[i];
                st.insert(a[i]);
                if(i > 1) {
                    union_sets(a[i], a[i - 1]);
                }
                /*for(int j = i - 1; j >= 1; j--) {
                     x[a[i]].push_back(a[j]);
                     x[a[j]].push_back(a[i]);
                 }*/
            }
        }
        int res = find_set(par[0]);
        ans = 1;
        for(auto i : st) {
            if(i != 0 && find_set(par[i]) == res)ans++;
        }
        //dfs(0);
        cout << ans << endl;
    }

    return 0;
}
