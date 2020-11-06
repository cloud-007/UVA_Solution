#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int l,m;
    cin>>l>>m;
    map<string, string>mp;
    vector<string>v(m);
    set<string>st;
    for(int i=0; i<l; i++)
    {
        string a,b;
        cin>>a>>b;
        mp[a]=b;
    }
    for(int i=0; i<m; i++)
    {
        cin>>v[i];
        string temp=v[i];
        auto itr=mp.find(temp);
        if(itr!=mp.end())
        {
            cout<<mp[temp]<<endl;
            continue;
        }
        else
        {
            if(v[i][v[i].size()-1]=='o' || v[i][v[i].size()-1]=='s' ||v[i][v[i].size()-1]=='x'||(v[i][v[i].size()-1]=='h' && v[i][v[i].size()-2]=='c')||(v[i][v[i].size()-1]=='h' && v[i][v[i].size()-2]=='s'))
                v[i]+="es";
            else if(v[i][v[i].size()-1]=='y' && ( v[i][v[i].size()-2]!='a' && v[i][v[i].size()-2]!='e'&&v[i][v[i].size()-2]!='i'&&v[i][v[i].size()-2]!='u'))
            {
                v[i].pop_back();
                v[i]+="ies";
            }
            else
                v[i]+="s";

        cout<<v[i]<<endl;
        }

    }
}
