#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n=201;
    while(n--)
    {
        long long int a,b,count=0;
        cin>>a>>b;
        if(a==0 && b==0)
            break;
        else

            for(int i=a; i<=b;i++)
            {
                int x=sqrt(i);
                if(x*x==i)
                    count++;
            }
        cout<<count<<endl;
    }
    return 0;
}
