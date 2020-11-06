#include<bits/stdc++.h>
using namespace std;
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}


int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            int x=sum(n);
            while(x>9)
            {
                x=sum(x);
            }
            cout<<x<<endl;
        }
    }
}
