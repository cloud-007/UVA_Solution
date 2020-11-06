#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int n,casee=1;
    cin>>n;
    getchar();
    string a[n],b[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i]);
        getline(cin,b[i]);
        //cout<<a[i]<<' '<<b[i]<<' '<<a[i].size()<<' '<<b[i].size()<<endl;
        if(a[i]==b[i])
            printf("Case %d: Yes\n",casee);
        else
            {
                sort(a[i].begin(),a[i].end());
                sort(b[i].begin(),b[i].end());
                int count=0;
                for(int j=0;j<a[i].size();j++)
                {
                    if(a[i][j]==' ')
                        count++;
                }
                //cout<<count<<endl;
                a[i]=a[i].substr(count,a[i].size());
                count=0;
                for(int j=0;j<b[i].size();j++)
                {
                    if(b[i][j]==' ')
                        count++;
                }
                b[i]=b[i].substr(count,b[i].size());
                //cout<<a[i]<<' '<<b[i]<<endl;
                if(a[i]==b[i])
                    printf("Case %d: Output Format Error\n",casee);
                else
                    printf("Case %d: Wrong Answer\n",casee);
            }
        casee++;
    }
}
