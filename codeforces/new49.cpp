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
    multiset<pair<int,int>>s;
    int check0 = 0,check1 = 0;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x == 1)
        {
            check0 = 1;
        }
        if(x != 1)
        {
            check1 = 1; 
        }
        s.insert({x,i+1});
    }
    if(check0 == 1 && check1 == 1)
    {
        cout<<-1<<endl;
        continue;
    }
    vector<pair<int,int>>v;
    int k = 2;
    // (*s.begin()).first != (*--s.end()).first
    // cout<<(*--s.end()).first<<" "<<(*s.begin()).first<<endl;
    // int l1 = (*--s.end()).first;
    // int l2 = (*s.begin()).first;
    // cout<<l1/l2<<endl;
    while((*s.begin()).first != (*--s.end()).first)
    {
        pair<int,int> p = {ceil((float)(*--s.end()).first/(*s.begin()).first),(*--s.end()).second};
        v.push_back({(*--s.end()).second,(*s.begin()).second});
        
        s.erase(--s.end());
        s.insert(p);
        k--;
    }
    cout<<v.size()<<endl;
    for(auto pr : v)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    


}
return 0;
}