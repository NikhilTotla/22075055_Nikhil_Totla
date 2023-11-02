#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
cin>>T;
while(T--)
{
    ll n,q;
    cin>>n>>q;
    ll a[n],b[q];
    ll sum[n] = {0};
   
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i<q;i++)
    {
        cin>>b[i];
    }
    sum[0] = a[0];
    for(int i = 1;i<n;i++)
    {
        sum[i] += sum[i-1] + a[i];
    }
    vector<ll>v;
    for(int i = 0;i<q;i++)
    {
        int check = 0;
        for(int j = 0;j<n;j++)
        {
            if(a[j]>b[i])
            {
                if(j == 0)
                {
                    v.push_back(0);
                }
                else
             {   v.push_back(sum[j-1]);}
                check = 1;
                break;
            }
        }
        if(check == 0)
        {
            v.push_back(sum[n-1]);
        }
    }
    for(auto pr : v)
    {
        cout<<pr<<" ";
    }
    cout<<endl;
}
return 0;
}