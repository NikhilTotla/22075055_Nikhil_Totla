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
    int a[n];
    int k = INT_MAX;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 1;i<n;i++)
    {
        k = min(k,a[i]);
    }
    if(a[0] - k>=1)
    {
        cout<<"ALICE\n";
    }
    else
    {
        cout<<"BOB\n";
    }
}
return 0;
}