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
int n, m, k, a[sz], vis[sz], ans = 0;
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
        for(int i = 0; i <= n; i++)x[i].clear(), vis[i] = 0;
        while(m--) {
            cin >> n;
            for(int i = 1; i <= n; i++) {
                cin >> a[i];
                for(int j = i - 1; j >= 1; j--) {
                    x[a[i]].push_back(a[j]);
                    x[a[j]].push_back(a[i]);
                }
            }
        }
        ans = 0;
        dfs(0);
        cout << ans << endl;
    }

    return 0;
}
