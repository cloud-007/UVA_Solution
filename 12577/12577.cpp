#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int casee =1;
    while(cin>>a)
    {
        if(a=="*")
            break;
        else if(a=="Hajj")
            cout<<"Case "<<casee<<": Hajj-e-Akbar"<<endl;
        else if(a=="Umrah")
            cout<<"Case "<<casee<<": Hajj-e-Asghar"<<endl;
        casee++;
    }
}
