#include<iostream>
#include<algorithm>
#include<cstring>
#include<set>
using namespace std;
int main()
{
    char a[210];
    set<string>st;
    set<string>::iterator it;
    while(scanf("%s",a)!=EOF)
    {
        string word="";
        for(int i=0; i<=strlen(a); i++)
        {
            if(isalpha(a[i]))
                word+=tolower(a[i]);
            else if(word!="")
            {
                st.insert(word);
                word="";
            }
        }
        //st.insert(word);
        
    }
    for( it=st.begin(); it!=st.end(); it++)
            cout<<*it<<endl;


}
