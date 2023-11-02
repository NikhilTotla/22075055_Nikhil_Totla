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
    set<pair<int,int>>s;
    for(int i = 0;i<n;i++)
    {
        cin>>p[i];
        s.insert({h[i],p[i]});
    }
    
    vector<int>v1,v2;
    for(auto it = s.begin();it != s.end();it++)
    {
        v1.push_back((*it).second);
    }
    int k1 = *(--v1.end());
    v2.push_back(k1);
    for(int i = (v1.size()-2);i>=0;i--)
    {
        k1 = min(k1,v1[i]);
        v2.push_back(k1);
    }
    reverse(v2.begin(),v2.end());
    ll sum = 0;
    int check = 0,check1 = 0;
    ll p1 = k;
    ll p2 = 0;
 
    while(s.size()>0)
    {
        auto it = s.begin();
        sum += p1; 
        if(it == s.end())
        {
            break;
        }
        while((*s.begin()).first<= sum)
        {
            s.erase(s.begin());
            if(p2 < v2.size()-1)
         {   p2++;}
            
            
            if(s.begin() == s.end())
            {
                check1 = 1;
                break;
            }
        }
        if(check1 == 1)
        {
            break;
        }
        
        p1 -= v2[p2];
        if(p1<= 0)
        {
            check = 1;
            cout<<"NO\n";
            break;
        }
        
    }
    if(check == 0)
    {
        cout<<"YES\n";
    }
}
return 0;
}