#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,casee=1;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<=20 && b<=20 && c<=20)
            printf("Case %d: good\n",casee);
        else
            printf("Case %d: bad\n",casee);
        casee++;
    }
}