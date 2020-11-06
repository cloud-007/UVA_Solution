#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,m;
    cin>>n>>m;
    map < string , int > mp;
    while(n--)
    {
        string s;int a;
        cin>>s>>a;
        mp[s]=a;
    }
    while(m--)
    {
        string s;
        long long sum=0;
        while(cin>>s && s!=".")
        {
            sum+=mp[s];
        }
        cout<<sum<<endl;
    }
}
