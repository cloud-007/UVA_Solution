#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        if(a=="donate")
        {
            cin>>x;
            sum+=x;
        }
        else if(a=="report")
            cout<<sum<<endl;
    }
}
