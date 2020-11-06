#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(cin>>a)
    {
        string b;
        for(int i=0; i<a.length(); i++)
        {
            if(a[i]=='B' || a[i]=='F' || a[i]=='P' || a[i]=='V')
            {
                if(a[i-1]!='B' && a[i-1]!='F' && a[i-1]!='P' && a[i-1]!='V')
                    b+='1';
            }
            else if(a[i]=='C' || a[i]=='G' || a[i]=='J' || a[i]=='K' || a[i]=='Q' || a[i]=='S' || a[i]=='X' || a[i]=='Z')
            {
                if(a[i-1]!='C' && a[i-1]!='G' && a[i-1]!='J' && a[i-1]!='K' && a[i-1]!='Q' && a[i-1]!='S' && a[i-1]!='X' && a[i-1]!='Z')
                    b+='2';
            }
            else if(a[i]=='D' || a[i]=='T')
            {
                if(a[i-1]!='D' && a[i-1]!='T')
                    b+='3';
            }
            else if(a[i]=='L')
            {
                if(a[i-1]!='L')
                    b+='4';
            }
            else if(a[i]=='M' || a[i]=='N')
            {
                if(a[i-1]!='M' && a[i-1]!='N')
                    b+='5';
            }
            else if(a[i]=='R')
            {
                if(a[i-1]!='R')
                    b+='6';
            }
        }
        cout<<b<<endl;
    }
    return 0;
}
