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
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n>=3)
    {
        int check = 0;
        for(int i = 0;i<n-2;i++)
        {
            if(__gcd(a[i],a[i+2]) != 1)
            {
                check = 1;
                break;

            }
        }
        if(check == 0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    else
    {
        cout<<"YES\n";
    }
}

return 0;
}