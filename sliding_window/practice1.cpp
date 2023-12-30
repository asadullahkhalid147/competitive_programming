#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;cin>>n;
    int k;cin>>k;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int i=0,j=0,mx=INT_MIN,sum=0;
    while(j<n)
    {
        sum+=arr[j];
        if(j<k-1) j++;
        else
        {
            mx = max(mx,sum);
            sum-=arr[i];
            i++;
            j++;
        }

    }
    cout<<mx<<endl;

}
