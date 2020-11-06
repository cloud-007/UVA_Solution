#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int x,y,i=200;
    while(i--){
        cin>>x>>y;
        if(x==-1 && y==-1)
            break;
        int z=abs(x-y);
        if(z>50)
            z=100-z;
        cout<<z<<endl;
    }

    return 0;
}
