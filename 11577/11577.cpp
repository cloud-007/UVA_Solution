#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        map<char,int>mp;
        //int count[26]= {0};
        string s;
        getline(cin,s);
        for(int i=0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                if(isupper(s[i]))
                    s[i]=tolower(s[i]);
                mp[s[i]]++;
            }
        }
        int max=0;
        for(auto i=mp.begin(); i!=mp.end(); i++)
        {
            if(i->second>max)
                max=i->second;
        }
        for(auto i=mp.begin(); i!=mp.end(); i++)
        {
            if(i->second==max)
                cout<<i->first;
        }
        cout<<endl;
    }
}
