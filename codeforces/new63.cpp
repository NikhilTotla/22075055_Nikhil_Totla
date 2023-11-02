#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
cin>>T;
while(T--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[n+1],cost[n+1];
    // map<int,int>m;
    for(int i = 1;i<=n;i++)
    {
        if(a[i] = (s[i-1] == '1'));
    }
    for(int i = n;i>0;i--)
    {
        for(int j = i;j<=n;j+=i)
        {
            if(a[j])break;
            cost[j] = i;
        }
    }
    ll sum = 0;
    for(int i = 1;i<=n;i++)
    {   
        if(!a[i])
        sum += cost[i];
    }
    cout<<sum<<endl;
    
}
return 0;
}