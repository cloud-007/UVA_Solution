/*One touch and i IGNITE*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define cloud_007 ios_base::sync_with_stdio(false);cin.tie(NULL)
#define F first
#define S second
#define endl "\n"
#define Endl "\n"

int tc, n, ans;
string s;


struct node {
    int endmark;
    node* next[3];
    int cnt = 0;
    node() {
        endmark  =  false;
        for (int i = 0; i < 3; i++)
            next[i] = NULL;
    }
} * root;

void insert(string str, int len) {
    node* curr = root;
    for (int i = 0; i < len; i++) {
        int id = str[i] - '0';
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
        curr->cnt++;
        ans = max(ans, curr->cnt * (i + 1));
    }
    curr->endmark = true;
}

int search(string str, int len) {
    node* curr = root;
    for (int i = 0; i < len; i++) {
        int id = str[i] - '0';
        if (curr->next[id] == NULL)
            return 0;
        curr = curr->next[id];
    }
    return curr->endmark;
}

void del(node* cur) {
    for (int i = 0; i < 3; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}



int main() {
#ifdef cloud007
    freopen("in.txt", "r", stdin);
#endif // cloud007
    cloud_007;
    cin >> tc;
    while(tc--) {
        cin >> n;
        root = new node();
        ans = 0;
        while(n--) {
            cin >> s;
            insert(s, s.size());
        }
        cout << ans << endl;
        del(root);
    }

    return 0;
}