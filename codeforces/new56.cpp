#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
cin>>T;
while(T--)
{
    ll n,c,d;
    cin>>n>>c>>d;
    int a[n];
    set<ll>s;
    int i = 1;
    vector<int>v;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);

    }
    for(auto pr : s)
    {
        v.push_back(pr);
    }
    ll sum = (*s.begin()-1)*d;
    ll sum1 = (n-1)*c;
    ll k = min(sum +sum1,n*c + d);
    
    for(int j = 1;j<v.size();j++)
    {
        
        sum += (v[j] - v[j-1]-1)*d;
        i++;
        sum1 = (n-i)*c;
        k = min(sum+sum1,k);

    }
    cout<<k<<endl;
}

return 0;
}