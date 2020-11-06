#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char a;
        cin>>a;
        int x,y;
        cin>>x>>y;
        if(a=='r')
            cout<<min(x,y)<<endl;
        else if(a=='k')
        {
                cout<<(x*y)/2<<endl;
        }
        else if(a=='K')
        {
                cout<<((x+1)/2)*((y+1)/2)<<endl;
        }

        else if(a=='Q')
        {
                cout<<min(x,y)<<endl;
        }
    }
}
