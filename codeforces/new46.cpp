#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>T;
while(T--)
{
    string s;
    cin>>s;
    ll a[2][26];
    for(int i = 0;i<26;i++)
    {
        for(int j = 0;j<2;j++)
        {
            a[j][i] = -1;
        }
    }
    for(int i = 0;i<s.size();i++)
    {
        if(a[0][s[i] - 'a'] == -1 && a[1][s[i] - 'a'] == -1)
        {
            a[0][s[i] - 'a'] = i;   
            a[1][s[i] - 'a'] = i;   
        }
        else
        {
            if(i - a[0][s[i] - 'a'] - 1>(a[1][s[i] - 'a']))
            {
                
                a[1][s[i] - 'a'] = i - a[0][s[i] - 'a'] -1;
            }
            a[0][s[i] - 'a'] = i;
        }
    }
    for(int i = 0;i<26;i++)
    {
        if((s.size() - 1 - a[0][i] > a[1][i]) && a[0][i] != -1 )
        {
            a[1][i] = s.size() - 1-a[0][i];
        }
    }
    // for(int i = 0;i<26;i++)
    // {
    //     cout<<a[0][i]<<" "<<a[1][i]<<endl;
    // }
    ll k = INT_MAX;
    for(int i = 0;i<26;i++)
    {
        if(a[1][i] != -1 && a[0][i] != -1)
        {
            k = min(k,a[1][i]);
        }
    }
    if(k == 0) cout<<0<<endl;
    else cout<<(ll)log2(k) + 1<<endl;
}
return 0;
}