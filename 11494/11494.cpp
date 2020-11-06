#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    while(cin>>x1>>y1>>x2>>y2)
    {
        if(x1==0 && x2==0 && y1==0 &&y2==0)
            break;

        else
        {
            int fk=abs(x1-x2);
            int yk=abs((y1-y2));
            if(x1==x2 && y1==y2)
                cout<<0<<endl;
            else if(fk==yk || ((x1==x2 && y1!=y2) || (y1==y2 && x1!=x2)))
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
}
