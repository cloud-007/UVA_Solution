/*One touch and i IGNITE*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define cloud_007 ios_base::sync_with_stdio(false);cin.tie(NULL)
#define F first
#define S second
#define endl "\n"
#define Endl "\n"

set < int > st;
int n;

void primeFactors(int n) {
    while(n % 2 == 0) {
        st.insert(2);
        n = n / 2;
    }
    for(int i = 3; i <= sqrt(n); i = i + 2) {
        while(n % i == 0) {
            st.insert(i);
            n = n / i;
        }
    }
    if(n > 2)
        st.insert(n);
}

int main() {
#ifdef cloud007
    freopen("in.txt", "r", stdin);
#endif // cloud007
    cloud_007;
    while(cin >> n && n){
        int m = n;
        st.clear();
        primeFactors(n);
        cout << m <<" : "<<st.size()<<endl;
    }

    return 0;
}
