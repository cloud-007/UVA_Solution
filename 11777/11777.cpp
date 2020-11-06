#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,casee=1;
    cin>>n;
    while(n--)
    {
        int t1,t2,f,a,c[3];
        cin>>t1>>t2>>f>>a;
        for(int i=0;i<3;i++)
            cin>>c[i];
        sort(c,c+3);
        int avg=(c[1]+c[2])/2;
        int tsum=t1+t2+f+a+avg;
        if(tsum>=90)
            cout<<"Case "<<casee<<": A"<<endl;
        else if(tsum>=80)
            cout<<"Case "<<casee<<": B"<<endl;
        else if(tsum>=70)
            cout<<"Case "<<casee<<": C"<<endl;
        else if(tsum>=60)
            cout<<"Case "<<casee<<": D"<<endl;
        else if(tsum<60)
            cout<<"Case "<<casee<<": F"<<endl;

        casee++;

    }
}
