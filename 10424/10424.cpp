#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    while(getline(cin,a) && getline(cin,b))
    {
        int suma=0;
        int sumb=0;
        for(int i=0; a[i]!='\0'; i++)
        {
            if(a[i]>='A' && a[i]<='Z')
                suma+=a[i]-64;
            else if(a[i]>='a' && a[i]<='z')
                suma+=a[i]-96;
            else
                continue;
            if(suma>=10)
            {
                while(suma>9)
                {
                    int x=0;
                while(suma>0)
                {
                    x=x+suma%10;
                    suma=suma/10;
                }
                suma=x;
                }
            }
        }
        for(int i=0; b[i]!='\0'; i++)
        {
            if(b[i]>='A' && b[i]<='Z')
                sumb+=b[i]-64;
            else if(b[i]>='a' && b[i]<='z')
                sumb+=b[i]-96;
            else
                continue;
            if(sumb>=10)
            {
                while(sumb>9)
                {
                    int x=0;
                while(sumb>0)
                {
                    x=x+sumb%10;
                    sumb=sumb/10;
                }
                sumb=x;
                }
            }
        }
        double ans;
        if(suma>sumb)
            ans=(float)sumb/(float)suma;
        else
            ans=(float)suma/(float)sumb;
        ans=ans*100;
        printf("%.2lf %%\n",ans);
    }
}
