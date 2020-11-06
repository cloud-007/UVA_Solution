#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
            break;
        int x[3];
        x[0]=a;
        x[1]=b;
        x[2]=c;
        sort(x,x+3);


        if(x[0] * x[0] + x[1]*x[1] ==x[2]*x[2])
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
}
