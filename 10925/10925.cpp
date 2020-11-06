#include<bits/stdc++.h>
using namespace std;

string addition(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";

    int n1 = str1.length(), n2 = str2.length();

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str+=(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str+=(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str+=(carry+'0');
    reverse(str.begin(), str.end());
    return str;
}

string divide(string number, int divisor)
{
    string ans;
    int i = 0;
    int temp = number[i] - '0';
    while (temp < divisor)
    {
        temp = temp * 10 ;
        i++;
        temp=temp+(number[i] - '0');
    }
    while (number.length() > i)
    {
        ans += (temp / divisor) + '0';
        i++;
        temp = (temp % divisor) * 10 + (number[i] - '0');
    }
    if (ans.length() == 0)
        return "0";
    else
        return ans;
}


int main()
{
    int a,b,casee=1;
    while(cin>>a>>b)
    {
        string sum;
        if(a==0 && b==0)
            break;
        else
        {
            string x[a];
            for(int i=0;i<a;i++)
                cin>>x[i];
            for(int i=0;i<a;i++)
                sum=addition(sum,x[i]);
        }
        cout<<"Bill #"<<casee<<" costs "<<sum<<": each friend should pay "<<divide(sum,b)<<endl;
        cout<<endl;
    casee++;
    }
}
