#include<iostream>
using namespace std;
int main()
{
    int n,casee=1;
    cin>>n;
    while(n--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if(a+b>c && b+c>a && c+a>b && a>0 && b>0 && c>0)
        {
            if(a==b && b==c && a==c)
                cout<<"Case "<<casee<<": Equilateral"<<endl;
            else if(a==b || b==c || a==c)
                cout<<"Case "<<casee<<": Isosceles"<<endl;
            else if(a!=b && b!=c && a!=c)
                cout<<"Case "<<casee<<": Scalene"<<endl;
        }
        else
            cout<<"Case "<<casee<<": Invalid"<<endl;
        casee++;
    }
    return 0;
}
