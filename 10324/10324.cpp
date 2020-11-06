#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int casee=1;
    while(cin>>s)
    {
        if (s=="\0") break;
        int n;
        cin>>n;
        cout<<"Case "<<casee<<":\n";
        while(n--)
        {
            int a,b,flag=0;
            cin>>a>>b;
            if(a==b)
            {
                flag=0;
            }
            else
            {
                for(int i=min(a,b);i<=max(a,b);i++)
                {
                    if(s[i]!=s[max(a,b)])
                    {
                        flag=1;
                        break;
                    }
                }
            }
            //getchar();
            if(flag==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;


        }
        casee++;
        getchar();
    }
}
