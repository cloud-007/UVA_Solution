#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,casee=1;
    while(cin>>n)
    {
        double u,v,t,a,s;
        if(n==0)
            break;
        else
        {
            if(n==1)
            {
                cin>>u>>v>>t;
                s=((u+v)*t)/2;
                a=(v-u)/t;
                printf("Case %d: %.3lf %.3lf\n",casee,s,a);
                casee++;
            }
            else if(n==2)
            {
                cin>>u>>v>>a;
                s=((v*v)-(u*u))/(2*a);
                t=(v-u)/a;
                printf("Case %d: %.3lf %.3lf\n",casee,s,t);
                casee++;
            }
            else if(n==3)
            {
                cin>>u>>a>>s;
                v=(u*u)+(2*a*s);
                v=sqrt(v);
                t=(v-u)/a;
                printf("Case %d: %.3lf %.3lf\n",casee,v,t);
                casee++;

            }
            else if(n==4)
            {
                cin>>v>>a>>s;
                u=(v*v)-(2*a*s);
                u=sqrt(u);
                t=(v-u)/a;
                printf("Case %d: %.3f %.3f\n",casee,u,t);
                casee++;
            }
        }
    }
}
