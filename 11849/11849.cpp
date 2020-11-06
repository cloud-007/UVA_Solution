#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
using namespace std;
int main()
{
    long long int a,b;
    while(cin>>a>>b && a!=0 && b!=0)
    {
        int count=0;
        map<long long int,long long int>mp;
        for(int i=0; i<a; i++)
        {
            long long int x;
            cin>>x;
            mp[x]=x;
        }
        for(int i=0; i<b; i++)
        {
            long long int x;
            cin>>x;
            if(mp[x])
                count++;
        }
        cout<<count<<endl;
    }

}
