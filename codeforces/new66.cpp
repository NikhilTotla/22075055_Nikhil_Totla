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
    int x[n],y[n];
    for(int i = 0;i<n;i++)
    {
        cin>>x[i];

    }
    for(int i = 0;i<n;i++)
    {
        int x1;
        cin>>x1;
        y[i] = x1 - x[i];
    }
    
    sort(y,y+n);
    int p1 = 0,p2 = n-1;
    ll sum = 0;
    while(p1<p2)
    {
        if(y[p2] + y[p1]>= 0)
        {
            sum++;
            p2--;
            p1++;
        }
        else
        {
            p1++;
        }
    }
    cout<<sum<<endl;
}
return 0;
}