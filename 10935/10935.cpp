#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        deque<int>dq;
        for(int i=1;i<=n;i++)
            dq.push_back(i);
        if(n==1)
            printf("Discarded cards:\n");
        else
            printf("Discarded cards: ");
        while(dq.size()!=1)
        {
            if(dq.size()==2)
            {
                cout<<dq.front()<<endl;
                dq.pop_front();
            }
            else
            {
                cout<<dq.front()<<", ";
                dq.pop_front();
                int x=dq.front();
                dq.push_back(x);
                dq.pop_front();
            }
        }
        printf("Remaining card: %d\n",dq.front());
    }
}
