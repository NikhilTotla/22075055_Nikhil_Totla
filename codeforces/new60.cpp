#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
cin>>T;
while(T--)
{
    int n,q;
    cin>>n>>q;
    ll a[n],b[q],hash[n+1];
    ll sum = 0;
    hash[0] = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        sum += a[i];
        hash[i+1] = sum;
    }
    for(int i = 0;i<q;i++)
    {
        cin>>b[i];
    }
    map<ll,ll>m;
    ll k = a[0];
    for(int i = 0;i<n;i++)
    {
        k = max(k,a[i]);
        m[k] = i+1;
    }
    vector<ll>v;
    vector<ll>ans;
    for(auto pr : m)
    {
        v.push_back(pr.first);
    }
    for(int i = 0;i<q;i++)
    {
        ll k1 = hash[m[(*--upper_bound(v.begin(),v.end(),b[i]))]];
        ans.push_back(k1);
    }
    for(auto pr : ans)
    {
        cout<<pr<<" ";
    }
    cout<<endl;
    

}
return 0;
}