#include<iostream>
using namespace std;
int main()
{
    int casee=1;
    string s;
    while(cin>>s && s!="#")
    {
        if(s=="HELLO")
            printf("Case %d: ENGLISH\n",casee);
        else if(s=="HOLA")
            printf("Case %d: SPANISH\n",casee);
        else if(s=="HALLO")
            printf("Case %d: GERMAN\n",casee);
        else if(s=="BONJOUR")
            printf("Case %d: FRENCH\n",casee);
        else if(s=="CIAO")
            printf("Case %d: ITALIAN\n",casee);
        else if(s=="ZDRAVSTVUJTE")
            printf("Case %d: RUSSIAN\n",casee);
        else
            printf("Case %d: UNKNOWN\n",casee);
        casee++;
    }
}
