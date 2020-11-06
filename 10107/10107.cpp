#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    unsigned long long n;
    vector<unsigned long long>v;
   // int a[]={1,2,3,4,5,6};
   // cout<<(a[6/2]+a[6/2-1])/2<<endl;
    while(cin>>n)
    {
        v.push_back(n);
        sort(v.begin(),v.end());
        if(v.size()%2==0)
        {
            int first=v.size()/2-1;
            int second=v.size()/2;
            cout<<(v[first]+v[second])/2<<endl;
        }
        else
            cout<<v[v.size()/2]<<endl;
    }
}
