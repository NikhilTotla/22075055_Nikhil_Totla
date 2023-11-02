#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// int T;
// cin>>T;
// while(T--)
{
    ll n,k;
    cin>>n>>k;
    string s;
    ll N = 1e9 +7;
    cin>>s;
    ll a[26][n];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<26;j++)
        {
            a[j][i] = 0;
        }
    }
    for(int i = 0;i<k;i++)
    {
        ll l,r;
        char c;
        cin>>l>>r>>c;
        a[c - 'a'][l-1]++;
        if(r != n) a[c - 'a'][r]--;
    }
    for(int i = 0;i<26;i++)
    {
        ll sum = 0;
        for(int j = 0;j<n;j++)
        {
            sum += a[i][j];
            if(sum) a[i][j] = 1;
        }
    }
    for(int i = 0;i<n;i++)
    {
        if(!a[s[i] - 'a'][i]) a[s[i] - 'a'][i]++;
    }
    ll k1 = 1;
    for(int i = 0;i<n/2;i++)
    {
        ll sum = 0;
        for(int j = 0;j<26;j++)
        {
            if(a[j][i] == 1 && a[j][n-i-1] == 1) sum++;
        }
        k1 = ((k1%N)*(sum%N))%N;
    }
    // cout<<k1<<endl;
    if(n%2 != 0)
    {
        ll sum = 0;
        for(int j = 0;j<26;j++)
        {
            if(a[j][n/2] == 1 && a[j][n/2] == 1) sum++;
        }
        k1 = ((k1%N)*(sum%N))%N;
    }
    cout<<k1<<endl;
}
return 0;
}