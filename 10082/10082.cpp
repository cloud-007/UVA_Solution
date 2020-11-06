#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while ( getline(cin,s))
    {
        string b;
        for(int i=0; i<s.length(); i++)
        {
            if (s[i]=='1')
                b+='`';
            if (s[i]=='2')
                b+='1';
            if (s[i]=='3')
                b+='2';
            if (s[i]=='4')
                b+='3';
            if (s[i]=='5')
               b+='4';
            if (s[i]=='6')
                b+='5';
            if (s[i]=='7')
               b+='6';
            if (s[i]=='8')
                b+='7';
            if (s[i]=='9')
                b+='8';
            if (s[i]=='0')
                b+='9';
            if (s[i]=='-')
                b+='0';
            if (s[i]=='=')
                b+='-';
            if (s[i]=='W')
                b+='Q';
            if (s[i]=='E')
                b+='W';
            if (s[i]=='R')
                b+='E';
            if (s[i]=='T')
                b+='R';
            if (s[i]=='Y')
                b+='T';
            if (s[i]=='U')
                b+='Y';
            if (s[i]=='I')
                b+='U';
            if (s[i]=='O')
                b+='I';
            if (s[i]=='P')
                b+='O';
            if (s[i]=='[')
                b+='P';
            if (s[i]==']')
                b+='[';
            if (s[i]=='\\')
                b+=']';
            if (s[i]=='S')
                b+='A';
            if (s[i]=='D')
                b+='S';
            if (s[i]=='F')
                b+='D';
            if (s[i]=='G')
                b+='F';
            if (s[i]=='H')
                b+='G';
            if (s[i]=='J')
                b+='H';
            if (s[i]=='K')
                b+='J';
            if (s[i]=='L')
                b+='K';
            if (s[i]==';')
                b+='L';
            if (s[i]==39)
                b+=';';
            if (s[i]=='X')
                b+='Z';
            if (s[i]=='C')
                b+='X';
            if (s[i]=='V')
                b+='C';
            if (s[i]=='B')
                b+='V';
            if (s[i]=='N')
                b+='B';
            if (s[i]=='M')
                b+='N';
            if (s[i]==',')
                b+='M';
            if (s[i]=='.')
                b+=',';
            if (s[i]=='/')
                b+='.';
            if (s[i]==' ')
               b+=' ';
        }
        cout<<b<<endl;
    }
    return 0;
}
