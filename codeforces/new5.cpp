#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e4 + 5;
int g[N];
int cal(int n)
{
    vector<int>v;
    for(int i = 1;i<=sqrt(n);i++)
    {
        v.push_back(g[n-i]);
    }
    sort(v.begin(),v.end());
    int mex = 0;
    for(int i = 0;i<v.size();i++)
    {
        if(v[i] == mex)
        {
            mex++;
        }
        else
        {
            return mex;
        }
    }
    return mex;

}
int main()
{
    
   
    g[0] = 0,g[1] = 1,g[2] = 0,g[3] = 1,g[4] = 2;
    for(int i = 5;i<N;i++)
    {
        g[i] = cal(i);
    }
    // cout<<g[8]<<endl;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T;
cin>>T;
while(T--)
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    x = g[x];
    for(int i = 1;i<n;i++)
    {
        int x1;
        cin>>x1;
        x = x^g[x1];
    }   
    if(x>0)
    {
        cout<<"Alice\n";
    }
    else
    {
        cout<<"Bob\n";
    }
}
return 0;
}