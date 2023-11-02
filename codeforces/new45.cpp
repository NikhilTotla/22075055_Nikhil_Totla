#include<iostream>
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
    ll a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n%2 != 0)
    {
        cout<<"YES\n";

        continue;
    } 
    for(int i = 1;i<n-1;i++)
    {
        ll t = a[i-1]-a[i];
        a[i] += t;
        a[i+1] += t;
    }
    if(a[n-1]>=a[n-2])
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