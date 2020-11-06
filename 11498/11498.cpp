#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        if(a==0)
            break;
        else
        {
            int divx,divy;
            cin>>divx>>divy;
            for(int i=0;i<a;i++)
            {
                int x,y;
                cin>>x>>y;
                if(divx==x || divy==y)
                    cout<<"divisa"<<endl;
                else if(x>divx && y>divy)
                    cout<<"NE"<<endl;
                else if(x<divx && y>divy)
                    cout<<"NO"<<endl;
                else if(x<divx && y<divy)
                    cout<<"SO"<<endl;
                else if(x>divx && y<divy)
                    cout<<"SE"<<endl;

            }
        }
    }
    return 0;
}
