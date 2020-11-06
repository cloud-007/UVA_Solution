#include<bits/stdc++.h>
using namespace std;
int main()
{
    int casee=1,n;
    while(cin>>n){
        if(n<0)
            break;
        int count=0,j=1;
        while(j<n)
        {
            j*=2;
            count++;
        }
        cout<<"Case "<<casee<<": "<<count<<endl;
        casee++;
    }

}
