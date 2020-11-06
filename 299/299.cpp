#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,count=0;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
        for(int i=0;i<x-1;i++){
            for(int j=i+1;j<x;j++){
                if(a[i]>a[j]){
                    count++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }
    return 0;
}
