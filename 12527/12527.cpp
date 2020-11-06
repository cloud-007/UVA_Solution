#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
    int count=0;
    while(a<=b)
    {
        int n=a;
        //vector<bool>d[11];
        int c[10]={};
        while (n!=0)
        {

            int x=n%10;
            if (c[x]==1)
                break;
            else
            {
                c[x]=1;
                n = n/10;
            }
        }
        if (n == 0)
            count++;
        a++;
    }
    cout<<count<<endl;
    }

}

