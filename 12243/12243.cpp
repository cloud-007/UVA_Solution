#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<cstring>
using namespace std;
int main()
{
    string a;
    while(getline(cin,a)&& a!="*")
    {
        vector<string>v(100);
        string word="";
        int space=0;
        char flag=tolower(a[0]);
        int count=1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==' ')
            {
                space++;
                if(tolower(a[i+1])==flag)
                    count++;
            }
        }
        //cout<<count<<' '<<space<<endl;
        /*int count=0;
        v.resize(space+1);
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i][0]==v[i+1][0])
                count++;
        }
        cout<<count<<' '<<v.size()<<endl;*/
        if(count==space+1)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }

}
