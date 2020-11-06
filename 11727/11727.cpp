#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,casee=1;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && c>b)
            {
                if(a>c)
                    cout<<"Case "<<casee<<": "<<c<<endl;
                else
                    cout<<"Case "<<casee<<": "<<a<<endl;
            }
        else if(b>a && c>a)
            {
                if(b>c)
                    cout<<"Case "<<casee<<": "<<c<<endl;
                else
                    cout<<"Case "<<casee<<": "<<b<<endl;
            }
        else if(a>c && b>c)
           {
               if(a>b)
                cout<<"Case "<<casee<<": "<<b<<endl;
               else
                cout<<"Case "<<casee<<": "<<a<<endl;
           }
           casee++;
    }
}
