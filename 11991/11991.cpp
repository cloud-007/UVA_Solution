/*One touch and i IGNITE*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define cloud_007 ios_base::sync_with_stdio(false);cin.tie(NULL)
#define F first
#define S second
#define endl "\n"
#define Endl "\n"

const int sz = 1e6 + 5;
int n, m, k, v, a;
vector < int > x[sz];
set < int > st;

int main() {
#ifdef cloud007
    freopen("in.txt", "r", stdin);
#endif // cloud007
    cloud_007;
    while(cin >> n >> m) {
        for(auto i : st)x[i].clear();
        st.clear();
        for(int i = 1; i <= n; i++) {
            cin >> a;
            x[a].push_back(i);
            st.insert(a);
        }

        while(m--) {
            cin >> k >> v;
            if(x[v].size() >= k) {
                cout << x[v][k - 1] << endl;
            } else {
                cout << 0 << endl;
            }
        }

    }

    return 0;
}
