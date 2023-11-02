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
    vector<int>v;
    if(n%2 == 0)
    {
        cout<<-1<<endl;
        continue;
    }
    int k = 0;
    while(n>1)
    {
        if((n+1)/2 %2 == 0)
        {
            v.push_back(2);
            n = (n+1)/2 -1;
        }
        else
        {
            v.push_back(1);
            n = (n+1)/2;
        }
        k++;
    }
    cout<<k<<endl;
    reverse(v.begin(),v.end());
    for(auto pr : v)
    {
        cout<<pr<<" ";
    }
    cout<<endl;
    
}
return 0;
}