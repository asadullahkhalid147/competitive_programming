#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    string str,ptr;
    cin>>str>>ptr;
    int n=str.size();
    int k=ptr.size();

    int fr1[26]={0};
    int fr2[26]={0};
    int ans=0;
    for(auto c:ptr)
    {
        fr1[c-'a']++;
    }
    int i=0,j=0;
    while(j<n)
    {
        fr2[str[j]-'a']++;
        if(j<k-1)j++;
        else
        {
            bool flag=true;
            for(int v=0;v<26;v++)
            {
                if(fr1[v]!=fr2[v]) flag=false;
            }
            if(flag)ans++;
            fr2[str[i]-'a']--;
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
}
