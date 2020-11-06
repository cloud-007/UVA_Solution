#include<iostream>
#include<deque>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    deque < string > dq;
    string s;
    while(cin>>s)
    {
        dq.clear();
        string word="";
        bool fro=false;
        for(auto i : s)
        {
            if(i!='[' && i!=']')
            {
                word+=i;
            }
            else
            {
                if(fro)
                {
                    dq.push_front(word);
                }
                else
                    dq.push_back(word);
                if(i=='[')
                    fro=true;
                else
                {
                    fro=false;
                }
                word="";
            }
        }
        if(fro)
        {
            dq.push_front(word);
        }
        else
            dq.push_back(word);
        for(auto i :dq)
            cout<<i;
        cout<<endl;
    }
}
