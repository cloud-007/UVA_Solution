#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<set>
using namespace std;

bool isPrime(int n)
{
    bool flag=true;
    for(int i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    cin>>n;
    getchar();
    for(int i=1; i<=n; i++)
    {
        string v;
        set<char>ans;
        int countu[26]= {0},countl[26]= {0},countd[10]= {0};
        cin>>v;
        int index=0;
        while (v[index] != '\0')
        {
            if (v[index] >= 'a' && v[index] <= 'z')
            {
                int x = v[index] - 'a';
                countl[x]++;
            }
            else if (v[index] >= 'A' && v[index] <= 'Z')
            {
                int y = v[index] - 'A';
                countu[y]++;
            }
            else if(v[index]>='0' && v[index]<='9')
            {
                int x=v[index]-'0';
                countd[x]++;
            }
            index++;
        }

        //for(auto i:countu)
        //    cout<<i<<endl;
        for(int j=0; j<26; j++)
        {
            if(countu[j]==0 || countu[j]==1)
                continue;
            else
            {
                if(isPrime(countu[j]))
                    ans.insert(j+'A');
            }

        }
        for(int j=0; j<26; j++)
        {
            if(countl[j]==0 || countl[j]==1)
                continue;
            else
            {
                if(isPrime(countl[j]))
                    ans.insert(j+'a');
            }

        }
        for(int j=0; j<10; j++)
        {
            if(countd[j]==0 || countd[j]==1)
                continue;
            else
            {
                if(isPrime(countd[j]))
                    ans.insert(j+'0');
            }
        }
        if(ans.size()==0)
            printf("Case %d: empty\n",i);
        else
        {
            printf("Case %d: ",i);
            for(auto it=ans.begin(); it!=ans.end(); it++)
                cout<<*it;
            cout<<endl;
        }
    }
}
