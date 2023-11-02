#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
cin>>T;
while(T--)
{   
    ll n,k;
    cin>>n>>k;
    ll a[k];
   
    for(int i = 0;i<k;i++)
    {
        cin>>a[i];
    }   
     if(k == 1)
    {
        cout<<"YES\n";
        continue;
    }
   
    int check = 0;
    ll k1 = a[k-1]-a[k-2];
    for(int i = k-1;i>0;i--)
    {
        // cout<<k1<<endl;
        if(k1<a[i] - a[i-1])
        {
            cout<<"NO\n";
            check = 1;
            break;
        }
        k1 = a[i] - a[i-1];
    }
    if(check == 1)
    {
        continue;
    }
    if((a[1] - a[0])*(n-k+1) >= a[0])
    {
        cout<<"YES\n";
    } 
    else
    {
        cout<<"NO\n";
    }

}
return 0;
}