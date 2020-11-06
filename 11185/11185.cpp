#include<bits/stdc++.h>
using namespace std;
string base3(long long int n)
{
    string ans;
    int flag=0;
    while(n!=0)
    {
        ans+=n%3+'0';
        n=n/3;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n<0)
            break;
        else if(n==0)
            cout<<0<<endl;
        else
            cout<<base3(n)<<endl;
    }
}
