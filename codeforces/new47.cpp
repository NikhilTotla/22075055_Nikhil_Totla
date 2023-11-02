#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T;
cin>>T;
while(T--)
{
    int n,k;
    cin>>n>>k;
    string s;
    int N = 1e9 +7;
    cin>>s;
    int a[26][n] = [0,0];
    for(int i = 0;i<n;i++)
    {
        a[s[i] - 'a'][i]++;
    }
    for(int i = 0;i<q;i++)
    {
        int l,r;
        char c;
        cin>>l>>r>>c;
        for(int i = l-1;i<r;i++)
        {
            if(!a[c - 'a'][i]) a[c - 'a'][i]++;
        }
    }
    int k = 1;
    for(int i = 0;i<n/2;i++)
    {
        int sum = 0;
        for(int j = 0;j<26;j++)
        {
            if(s[j][i] == 1 && s[j][n-i-1]) sum++;
        }
        k = ((k%N)*(sum%N))%N;
    }
    if(n%2 != 0)
    {
        int sum = 0;
        for(int j = 0;j<26;j++)
        {
            if(s[j][i] == 1 && s[j][n-i-1]) sum++;
        }
        k = ((k%N)*(sum%N))%N;
    }
    cout<<k<<endl;

}
return 0;
}