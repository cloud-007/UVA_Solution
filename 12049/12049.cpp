#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        map<int,int>mp1;
        map<int,int>mp2;
        set<int>st;
        int a,b;
        cin>>a>>b;
        for(int i=0;i<a;i++)
        {
            int x;
            cin>>x;
            mp1[x]++;
            st.insert(x);
        }
        //for(auto i:mp1)
        //3    cout<<i.first<<' '<<i.second<<endl;
        for(int i=0;i<b;i++)
        {
            int x;
            cin>>x;
            mp2[x]++;
            st.insert(x);
        }
        int sum=0;
        for(auto i=st.begin();i!=st.end();i++)
        {
            sum+=abs(mp1[*i]-mp2[*i]);
        }
        //cout<<mp2.size()<<endl;
        //sum+=(mp2.size());
      //  for(auto i=mp2.begin();i!=mp2.end();i++)
      //  {
       //     sum+=(mp1[i->first]-mp2[i->first]);
           // mp1.erase(i->first);
            //mp2.erase(i->first);
       // }
        cout<<sum<<endl;
    }
}

