/*One touch and i IGNITE*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define cloud_007 ios_base::sync_with_stdio(false);cin.tie(NULL)
#define F first
#define S second
#define endl "\n"
#define Endl "\n"

int s, a[15], b[15], casee = 1;

int main() {
#ifdef cloud007
    freopen("in.txt", "r", stdin);
#endif // cloud007
    cloud_007;
    while(cin >> s) {
        if(s < 0) {
            return 0;
        }
        for(int i = 1; i <= 12; i++)cin >> a[i];
        for(int i = 1; i <= 12; i++)cin >> b[i];
        a[0] = s;
        cout << "Case " << casee++ << ":" << endl;
        for(int i = 1; i <= 12; i++) {
            if(a[i - 1] >= b[i]) {
                cout << "No problem! :D" << endl;
                a[i] += abs(a[i - 1] - b[i]);
            } else {
                cout << "No problem. :(" << endl;
                a[i] += a[i - 1];
            }
        }
    }

    return 0;
}
