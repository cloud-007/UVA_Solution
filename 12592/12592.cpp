#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    string a,b,c;
    map < string , string > mp;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        getline(cin,a);
        getline(cin,b);
        mp[a]=b;
    }
    int m;
    cin>>m;
    cin.ignore();
    vector < string > v;
    for(int i=0;i<m;i++)
    {
        getline(cin,c);
        cout<<mp[c]<<endl;
    }
}
