#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,casee=1;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int a[x];
        for(int i=0; i<x; i++)
            cin>>a[i];
        cout<<"Case "<<casee<<": "<<a[(x/2)]<<endl;
        casee++;
    }
}
