#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;cin>>n;
    int k;cin>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    int i=0,j=0;
    queue<int>q;
    while(j<n)
    {
        if(a[j]<0)q.push(a[j]);

        if(j<k-1)j++;
        else
        {
            if(q.empty())cout<<0<<" ";
            else cout<<q.front()<<" ";
            if(a[i]<0)q.pop();
            i++;
            j++;
        }
    }
}
