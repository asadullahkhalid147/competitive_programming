#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    long long sum=0;int i=0,j=0,mx=0;

    while(j<n)
    {
        sum+=arr[j];
        while(sum>k)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==k)
        {

            mx=max(mx,j-i+1);
        }
        j++;
    }
    cout<<mx<<endl;
}
