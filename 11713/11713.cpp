#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v(n),a(n);
    for(int i=0; i<n; i++)
    {
        int flag=0;
        cin>>v[i]>>a[i];
        if(v[i].size()==a[i].size())
        {
            for(int j=0; j<v[i].size(); j++)
            {
                if(v[i][j]=='a'||v[i][j]=='e'||v[i][j]=='i'||v[i][j]=='o'||v[i][j]=='u')
                {
                    if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
                        flag=0;
                }
                else
                {
                    if(a[i][j]==v[i][j])
                        flag=0;
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
}
