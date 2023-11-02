#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
    {
     	ll n,m;
     	cin>>n>>m;   
     	ll k[n];
     	for(int i = 0;i<n;i++)
     	{
     		cin>>k[i];
     	}
     	sort(k,k+n);
     	for(int i = 0;i<m;i++)
     	{
     		double a,b,c;
     		cin>>a>>b>>c;
     		if(c<= 0)
     		{
     			cout<<"NO\n";
     		}
     		else
     		{

     			auto it = upper_bound(k,k+n,(b-sqrt(4*a*c)));
     			if(*it<(b+sqrt(4*a*c)))
     			{
     				cout<<"YES\n";
     				cout<<*it<<endl;

     			}
     			else
     			{
     				cout<<"NO\n";
     			}
     		}
     	}
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    while(t--)
            solve();
    return 0;
}