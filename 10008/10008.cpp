#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
using namespace std;

bool cmp(std::pair<char,int>a,std:: pair<char,int>b)   /// bool cmp(parameter should be for both case
{
    if(a.second==b.second)
        return a.first>b.first;
    return a.second<b.second;
}

int main()
{
    int n;
    vector<int>v;
    vector<char>s;
    multiset<int>st;
    int index = 0, count[26] = {0}, x,y;
    cin>>n;
    getchar();
    while(n--)
    {
        char a[10000];
        gets(a);
        for(int i=0; i<strlen(a); i++)
        {
            if(a[i]>=97 && a[i]<=122)
                a[i]-=32;
        }
        for(int i=0; i<strlen(a); i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                x = a[i] - 'A';
                count[x]++;
            }
        }



    }
    //multimap<int,char>mp;
    vector<pair<char,int>>vp;
    for(int i=0; i<26; i++)
    {
        if(count[i]==0)
            continue;
        else
        {
            if(count[i]!=count[i-1])
            {
                // st.insert(count[i]);
                //mp.insert(pair<int,char>(count[i],i+'A'));
                vp.push_back({i+'A',count[i]});          ///mp[count[i]]=i+'A';
            }
        }
    }
    sort(vp.begin(),vp.end(),cmp);
    //sort(mp.rbegin(),mp.rend(),cmp);
    for(auto it=vp.rbegin(); it!=vp.rend(); it++)
        cout<<it->first<<' '<<it->second<<endl;
}
