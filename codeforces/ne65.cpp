#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
cin>>T;
while(T--)
{
    int n,c;
    cin>>n>>c;
    int a[n];
    map<int,int>m;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        m[x]++;
    }   
    ll cost = 0;
    for(auto pr : m)
    {
        if(pr.second<c)
        {
            cost += pr.second;
        }
        else
        {
            cost += c;
        }
    }
    cout<<cost<<endl;
    

}
return 0;
}