#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,casee=1;
    cin>>n;
    while(n--)
    {
        map<char,int>mp;
        int r,c,ma,mi;
        cin>>r>>c>>ma>>mi;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                char c;
                cin>>c;
                mp[c]++;
            }
        }
        int max=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>max)
                max=it->second;
        }
        int sum=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(max==it->second)
                sum+=(it->second)*ma;
            else
                sum+=(it->second)*mi;
        }
        //cout<<max<<endl;
        printf("Case %d: %d\n",casee,sum);
        casee++;
        //cout<<<<endl;
    }
}
