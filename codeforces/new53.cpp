#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int T;
cin>>T;
while(T--)
{
    int n,k;
    cin>>n>>k;
    int h[n],p[n];
    for(int i = 0;i<n;i++)
    {
        cin>>h[i];
    }
    unordered_map<int,int>m;
    for(int i = 0;i<n;i++)
    {
        cin>>p[i];
        m.insert(p[i],h[i]);
    }
    sort(m.begin(),m.end());
    
    

}
return 0;
}