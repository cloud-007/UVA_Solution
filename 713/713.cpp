#include<bits/stdc++.h>
using namespace std;
string findsum(string a, string b)
{
    if (a.length() > b.length())
        swap(a, b);
    string ans = "";

    int n1 = a.length(), n2 = b.length();

    ///reverse(a.begin(), a.end());
    ///reverse(b.begin(), b.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((a[i]-'0')+(b[i]-'0')+carry);
        ans+=(sum%10 + '0');
        carry = sum/10;
    }

    for (int i=n1; i<n2; i++)
    {
        int sum = ((b[i]-'0')+carry);
        ans+=(sum%10 + '0');
        carry = sum/10;
    }

    if (carry)
        ans+=(carry+'0');

    return ans;

}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        string b;
        cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int i=0,j=0;
        if(a[0]=='0')
        {

            while(a[i]<='0')
            {
                i++;
            }
        }
        a=a.substr(i,a.length());
        reverse(a.begin(),a.end());
        if(b[0]=='0')
        {

            while(b[j]<='0')
            {
                j++;
            }
        }
        b=b.substr(j,b.length());
        reverse(b.begin(),b.end());
        //cout<<b<<endl;
        string sum;
        sum=findsum(a,b);
        i=0;
        if(sum[i]=='0')
        {
            while(sum[i]<='0')
            {
                i++;
            }
        }
        sum=sum.substr(i,sum.length());
        cout<<sum<<endl;
    }
}
